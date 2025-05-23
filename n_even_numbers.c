#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    i = 2;
    while ( i <= n) {
        if (i % 2 == 0) {
            printf("%d \n",i);
        }
        i= i+1;
    }
}
