#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter the number of numbers to find the sum: ");
    scanf("%d",&n);
    i = 1;
    while (i <= n) {
        sum = sum + i;
        i = i+1;
    }
    printf("sum of %d natural numbers= %d",n,sum);

}