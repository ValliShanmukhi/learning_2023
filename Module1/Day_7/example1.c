#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStructArray(const char *input, struct Students *students, int array_Size) {
    char tempInput[50];
    strcpy(tempInput, input);

    for (int j = 0; j < array_Size; j++) {
        // Get the rollno
        char *token = strtok(tempInput, " ");
        students[j].rollno = atoi(token);
        tempInput[strlen(token)] = '\0';

        // Get the name
        token = strtok(NULL, " ");
        strcpy(students[j].name, token);
        tempInput[strlen(token) + 1] = '\0';

        // Get the marks
        token = strtok(NULL, " ");
        students[j].marks = atof(token);
        tempInput[strlen(token) + 1] = '\0';

        // Reset tempInput for the next iteration
        strcpy(tempInput, &tempInput[strlen(token) + 1]);
    }
}

int main() {
    const char inputString[] = "1001 Aron 100.00";
    const int arraySize = 1;

    struct Students *students = malloc(arraySize * sizeof(struct Students));

    parseStringToStructArray(inputString, students, arraySize);

    printf("Parsed Structure Array:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}