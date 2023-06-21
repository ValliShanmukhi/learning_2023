#include <stdio.h>

struct Box {
    double leng;
    double width;
    double height;
};

void calculateBoxPro(struct Box *box) {
    double volume = box->leng * box->width * box->height;
    double surfaceArea = 2 * (box->leng * box->width + box->leng * box->height + box->width * box->height);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    printf("Enter the leng of the box: ");
    scanf("%lf", &boxPtr->leng);
    
    printf("Enter the width of the box: ");
    scanf("%lf", &boxPtr->width);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &boxPtr->height);

    calculateBoxPro(boxPtr);

    return 0;
}