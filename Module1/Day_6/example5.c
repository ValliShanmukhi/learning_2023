#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int m;
    printf("Enter the number of students: ");
    scanf("%d", &m);

    // Dynamically allocate memory for 'n' student structures
    struct Student* students = (struct Student*)malloc(m * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Read data for each student
    for (int j = 0; j < m; j++) {
        printf("\nEnter details for student %d:\n", j + 1);
        printf("Name: ");
        scanf("%s", students[j].name);
        printf("Roll No: ");
        scanf("%d", &students[j].rollNo);
        printf("Marks: ");
        scanf("%f", &students[j].marks);
    }

    // Display the data for each student
    printf("\nStudent Details:\n");
    for (int j = 0; j < m; j++) {
        printf("\nStudent %d:\n", j + 1);
        printf("Name: %s\n", students[j].name);
        printf("Roll Number: %d\n", students[j].rollNo);
        printf("Marks: %.2f\n", students[j].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
