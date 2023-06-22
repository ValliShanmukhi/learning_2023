#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 4096

// Function to convert the file content to Upper Case
void convertToUpper(char* buff) {
    for (int u = 0; buff[u] != '\0'; u++) {
        buff[u] = toupper(buff[u]);
    }
}

// Function to convert the file content to Lower Case
void convertToLower(char* buff) {
    for (int u = 0; buff[u] != '\0'; u++) {
        buff[u] = tolower(buff[u]);
    }
}

// Function to convert the file content to Sentence Case
void convertToSentenceCase(char* buff) {
    int capitalizeNext = 1;  // Flag to capitalize the next character

    for (int u = 0; buff[u] != '\0'; u++) {
        if (isspace(buff[u])) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            buff[u] = toupper(buff[u]);
            capitalizeNext = 0;
        } else {
            buff[u] = tolower(buff[u]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <target_file>\n");
        return 1;
    }

    char* option = argv[1];
    char* sourcePath = argv[2];
    char* targetPath = argv[3];

    FILE* sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE* targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Unable to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    char buff[BUFFER_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buff, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (strcmp(option, "-u") == 0) {
            convertToUpper(buff);
        } else if (strcmp(option, "-l") == 0) {
            convertToLower(buff);
        } else if (strcmp(option, "-s") == 0) {
            convertToSentenceCase(buff);
        }

        fwrite(buff, 1, bytesRead, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}