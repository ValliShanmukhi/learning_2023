#include <stdio.h>
#include <string.h>

#define Max_Name_Len 50
#define Max_Students 100

typedef struct {
    char name[Max_Name_Len];
    int age;
    
} Students;

Students students[Max_Students]; 
int searchByName(const char* name, int numberofStudents) {
    for (int j = 0; j < numberofStudents; j++) {
        if (strcmp(students[j].name, name) == 0) {
            return j; 
        }
    }
    return -1; 
}

int main() {
    int numberofStudents = 4;
    strcpy(students[0].name, "Jhanu");
    students[0].age = 21;
    
    strcpy(students[1].name, "Priya");
    students[1].age = 22;
    
    strcpy(students[2].name, "Bhagya");
    students[2].age = 23;
    
    strcpy(students[3].name, "Charshima");
    students[3].age = 21;

    char searchName[Max_Name_Len];
    printf("Search the Name: ");
    scanf("%s", searchName);
    
    int index = searchByName(searchName, numberofStudents);
    
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
    } else {
        printf("Student not found.\n");
    }
    
    return 0;
}