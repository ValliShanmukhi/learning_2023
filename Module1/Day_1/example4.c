#include<stdio.h>

int Marks(int Roll_Number, char Name[], int Physics, int Math, int Chemistry);

int main() {
    int Roll_Number;
    char Name[50];
    int Physics;
    int Math;
    int Chemistry;

    printf("Enter Roll_Number: ");
    scanf("%d", &Roll_Number);

    printf("Enter Name of the student: ");
    scanf(" %[^\n]s", Name);

    printf("Enter Physics marks: ");
    scanf("%d", &Physics);

    printf("Enter Math marks: ");
    scanf("%d", &Math);

    printf("Enter Chemistry marks: ");
    scanf("%d", &Chemistry);

    Marks(Roll_Number, Name, Physics, Math, Chemistry);

    return 0;
}

int Marks(int Roll_Number, char Name[], int Physics, int Math, int Chemistry) {
    int total = Physics + Math + Chemistry;
    float Percentage = (float)total / 300 * 100;

    printf("***********************************\n");
    printf("\tRoll_Number: %d\n", Roll_Number);
    printf("\tName of the student: %s\n", Name);
    printf("\tPhysics Marks: %d\n", Physics);
    printf("\tMath Marks: %d\n", Math);
    printf("\tChemistry Marks: %d\n", Chemistry);
    printf("\tTotal Marks: %d\n", total);
    printf("\tPercentage: %.2f%%\n", Percentage);

return 0;
}


