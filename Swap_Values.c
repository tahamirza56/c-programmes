#include <stdio.h>

int main() {
    int c,d, x;
    printf("enter the number c:");
    scanf("%d",&c);
    printf("enter the number d:");
    scanf("%d",&d);

    x = c;
    c = d;
    d = x;

    printf("after interchanging, c = %d and d = %d",c,d);

return 0;
}