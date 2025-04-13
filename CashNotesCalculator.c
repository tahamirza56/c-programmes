#include <stdio.h>

int main() {
    int amount;
    int hundred_notes, fifty_notes, ten_notes;

    printf("Enter the amount to withdraw (in rupees): ");
    scanf("%d", &amount);

    hundred_notes = amount / 100;
    amount = amount % 100;

    fifty_notes = amount / 50;
    amount = amount % 50;

    ten_notes = amount / 10;
    amount = amount % 10;

    printf("\nCurrency notes to be given:\n");
    printf("100s = %d\n", hundred_notes);
    printf("50s  = %d\n", fifty_notes);
    printf("10s  = %d\n", ten_notes);

    return 0;
}
