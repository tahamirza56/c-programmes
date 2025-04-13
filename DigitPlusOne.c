#include <stdio.h>

int main() {
    int number;
    int d1, d2, d3, d4, d5, new_number;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);


    d1 = number / 10000;
    d2 = (number / 1000) % 10;
    d3 = (number / 100) % 10;
    d4 = (number / 10) % 10;
    d5 = number % 10;

    d1 = (d1 + 1) % 10;
    d2 = (d2 + 1) % 10;
    d3 = (d3 + 1) % 10;
    d4 = (d4 + 1) % 10;
    d5 = (d5 + 1) % 10;

    new_number = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("new_number = %d\n", new_number);

    return 0;
}
