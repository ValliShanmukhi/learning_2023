#include <stdio.h>

int delete_digit(int num);

int main() {
    int num;

    printf("Give a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("wrong input\n");
        return 0;
    }

    int largest_num = delete_digit(num);

    printf("Largest number after deleting a digit: %d\n", largest_num);

    return 0;
}

int delete_digit(int num) {
    int largest_num = 0;
    int latest_num = num;

    int number = 1;
    while (number <= latest_num) {
        int digit = (latest_num / number) % 10;
        int remaining_num = (latest_num / (number * 10)) * number + (latest_num % number);

        if (remaining_num > largest_num) {
            largest_num = remaining_num;
        }

        number *= 10;
    }

    return largest_num;
}
