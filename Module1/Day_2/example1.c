#include <stdio.h>
#include <stdint.h>


uint16_t extractExponent(double x) {
    union {
        double d;
        uint64_t u;
    } data;
    
    data.d = x;
    uint16_t exponent = (data.u >> 52) & 0x7FF;
    
    return exponent;
}


void printHexExponent(double x) {
    uint16_t exponent = extractExponent(x);
    printf("Exponent in hexadecimal: 0x%X\n", exponent);
}


void printBinaryExponent(double x) {
    uint16_t exponent = extractExponent(x);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    
    printHexExponent(x);
    printBinaryExponent(x);
    
    return 0;
}