#include <stdio.h>
#include <string.h>

struct Students {
    int rollno;
    char name[20];
    float marks;
};

void initializeStructArray(struct Students *students, int array_Size) {
    for (int j = 0; j < array_Size; j++) {
        printf("Enter details for Student %d:\n", j + 1);
        
        printf("Roll No: ");
        scanf("%d", &(students[j].rollno));

        printf("Name: ");
        scanf("%s", students[j].name);

        printf("Marks: ");
        scanf("%f", &(students[j].marks));

        printf("\n");
    }
}

int main() {
    const int array_Size = 4;
    struct Students students[array_Size];

    initializeStructArray(students, array_Size);

    printf("Initialized Structure Array:\n");
    for (int j = 0; j < array_Size; j++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",
               j + 1, students[j].rollno, students[j].name, students[j].marks);
    }

    return 0;
}