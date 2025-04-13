#include <stdio.h>

int main() {
    int number;
    int d1, d2, d3, d4, d5, reversed;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);


    d1 = number / 10000;
    d2 = (number / 1000) % 10;
    d3 = (number / 100) % 10;
    d4 = (number / 10) % 10;
    d5 = number % 10;

    reversed = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("Reversed number = %d\n", reversed);

    return 0;
}
