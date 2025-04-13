#include <stdio.h>

int main() {
    float Fahrenheit, centigrade_degree;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    centigrade_degree = (Fahrenheit - 32) * 5 / 9;


    printf("Temperature in degree centigrade = %.1f%cC\n", centigrade_degree, 248);

    return 0;
}
