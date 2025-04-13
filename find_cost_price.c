#include<stdio.h>

int main() {
    int selling_price , cost_price , profit;

    printf("Enter the selling price of the item: ");
    scanf("%d",&selling_price);

    printf("Enter the profit of the item: ");
    scanf("%d",&profit);

    cost_price = selling_price - profit;
    printf("The cost price of the item is: %d",cost_price);

    return 0;
}