#include <stdio.h>

int main() {
    int number, sum;
    int x1, x2, x3, x4, x5;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    x1 = number / 10000;
    x2 = (number / 1000) % 10;
    x3 = (number / 100) % 10;
    x4 = (number / 10) % 10;
    x5 = number % 10;

    sum = x1 + x2 + x3 + x4 + x5;

    printf("Sum of the digits = %d\n", sum);

    return 0;
}
