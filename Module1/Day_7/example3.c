#include <stdio.h>
#include <string.h>

struct Students {
    int rollnumber;
    char name[20];
    float marks;
};

void initializeStructArray(struct Students *students, int array_Size) {
    for (int j = 0; j < array_Size; j++) {
        printf("Enter details for Student %d:\n", j + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[j].rollnumber);
        
        printf("Name: ");
        scanf("%s", students[j].name);
        
        printf("Marks: ");
        scanf("%f", &students[j].marks);
        
        printf("\n");
    }
}

void displayStructArray(const struct Students *students, int array_Size) {
    printf("Structure Array:\n");
    for (int j = 0; j < array_Size; j++) {
        printf("Student %d:\n", j + 1);
        printf("Roll No: %d\n", students[j].rollnumber);
        printf("Name: %s\n", students[j].name);
        printf("Marks: %.2f\n", students[j].marks);
        printf("\n");
    }
}

int main() {
    const int array_Size = 3;
    struct Students students[array_Size];
    
    initializeStructArray(students, array_Size);
    
    displayStructArray(students, array_Size);
    
    return 0;
}