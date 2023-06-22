#include <stdio.h>
#include <string.h>

struct employee {
    char Name[50];
    int age;
};

void swap(struct employee* emp1, struct employee* emp2) 
{
    struct employee temp;
    
    
   
    temp = *emp1;
    *emp1 = *emp2;
    *emp2 = temp;
}

int main() {
    
  
    struct employee emp1,age1;
    struct employee emp2,age2;
    
    printf("enter Employee1 Name:");
    scanf("%s",emp1.Name);
    printf("Enter Employee1 age:");
    scanf("%d",&emp1.age);
    printf("Enter Employee2 Name:");
    scanf("%s",emp2.Name);
    printf("Enter Employee2 age:");
    scanf("%d",&emp2.age);
    


    printf("\nBefore swapping:\n");
    printf("Employee 1 - Name: %s, Age: %d\n", emp1.Name, emp1.age);
    printf("Employee 2 - Name: %s, Age: %d\n", emp2.Name, emp2.age);


    swap( &emp1, &emp2);

    printf("\nAfter swapping:\n");
    printf("Employee 1 - Name: %s, Age: %d\n", emp1.Name, emp1.age);
    printf("Employee 2 - Name: %s, Age: %d\n", emp2.Name, emp2.age);

    return 0;
}