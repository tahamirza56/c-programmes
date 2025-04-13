#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;

    printf("Enter distance between two cities (in km): ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = meters * 100;
    inches = centimeters / 2.54;
    feet = inches / 12;

    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in centimeters: %.2f cm\n", centimeters);
    printf("Distance in inches: %.2f in\n", inches);
    printf("Distance in feet: %.2f ft\n", feet);

    return 0;
}
