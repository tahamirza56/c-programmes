#include<stdio.h>

int main() {
    int number , sum , x1,x2;
    printf("Enter a four digit number: ");
    scanf("%d",&number);

    x1 = number / 1000;
    x2 = number % 10;

    sum = x1 + x2;

    printf("sum of first and last digit =%d", sum);

    return 0;
}