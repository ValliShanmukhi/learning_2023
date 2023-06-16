#include <stdio.h>

int bit_operations(int n, int opert_typ);

int main() {
    int n, opert_typ;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &n);

    printf("Enter the operation type (1: Set 1st bit, 2: Clear 31st bit, 3: Toggle 16th bit): ");
    scanf("%d", &opert_typ);

    int result = bit_operations(n, opert_typ);

    printf("Result: %d\n", result);

    return 0;
}

int bit_operations(int n, int opert_typ) {
    switch (opert_typ) {
        case 1:
            n |= 1;  
            break;
        case 2:
            n &= ~(1 << 31);  
            break;
        case 3:
            n ^= 1 << 16;  
            break;
        default:
            printf("Error: Invalid operation type\n");
            return -1;
    }

 return n;
}