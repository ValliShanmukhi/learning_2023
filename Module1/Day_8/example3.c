#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_entries 100
#define Max_line_len 100

typedef struct {
    int entryNum;
    char sensorNum[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} Log_Entry;

void displayLog_Entries(const Log_Entry* log_Entries, int count) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("--------------------------------------------------------\n");

    for (int u = 0; u < count; u++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               log_Entries[u].entryNum,
               log_Entries[u].sensorNum,
               log_Entries[u].temperature,
               log_Entries[u].humidity,
               log_Entries[u].light,
               log_Entries[u].time);
    }
}

int main() {
    Log_Entry log_Entries[Max_entries];
    int count = 0;

    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    char line[Max_line_len];

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (count < Max_entries && fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]",
               &log_Entries[count].entryNum,
               log_Entries[count].sensorNum,
               &log_Entries[count].temperature,
               &log_Entries[count].humidity,
               &log_Entries[count].light,
               log_Entries[count].time);

        count++;
    }

    fclose(file);

    displayLog_Entries(log_Entries, count);

    return 0;
}