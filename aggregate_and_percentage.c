#include<stdio.h>

int main() {
    int math , science , english , urdu , computer , total_marks;
    float percentage ;
    printf("Enter marks of math: ");
    scanf("%d",&math);
    printf("Enter marks of science: ");
    scanf("%d",&science);
    printf("Enter marks of english: ");
    scanf("%d",&english);
    printf("Enter marks of urdu: ");
    scanf("%d",&urdu);
    printf("Enter marks of computer: ");
    scanf("%d",&computer);

    total_marks = math + science + english + urdu + computer ;

    percentage = ((float)total_marks / 500) * 100 ;

    printf("total marks obtained = %d\n", total_marks);
    printf("percentage = %.2f", percentage);

    return 0;

}