#include <stdio.h>

#define Max_Students 30

typedef struct {
    char name[50];
    int marks;
} Students;

void sortDescendingByMarks(Students students[], int numberofStudents) {
    int i, j;
    Students temp;

    for (i = 0; i < numberofStudents - 1; i++) {
        for (j = 0; j < numberofStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap students[j] and students[j + 1]
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void main() {
    Students students[Max_Students];
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the student details:\n");
    for (i = 0; i < n; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Sort the array in descending order by marks
    sortDescendingByMarks(students, n);

    printf("The students arranged in descending order based on marks are:\n");
    for (i = 0; i < n; ++i) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
}