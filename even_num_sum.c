#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("Enter the number of elements to find the sum: ");
    scanf("%d",&n);

    i=1;
    while (i<=n) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("The sum of %d odd number=%d",n,sum);
}