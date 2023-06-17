#include <stdio.h>

void print_bits(int n);

int main() {
    int n;

    printf(" Give a 32-bit integer: ");
    scanf("%d", &n);

    printf("Bits of given number: ");
    print_bits(n);

    return 0;
}

void print_bits(int n) {
    unsigned int bit = 1 << 31;  

    for (int h = 0; h < 32; h++) {
        
        if ((n & bit) != 0) {
            printf("1");
        } else {
            printf("0");
        }

        
        bit >>= 1;
    }

    printf("\n");
}