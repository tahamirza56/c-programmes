#include<stdio.h>

int main() {
    int basic_salary, gross_salary;
    float DA ,HRA;
    printf("Enter your basic salary: ");
    scanf("%d", &basic_salary);

    DA = (40/ 100) * basic_salary;
    HRA = (20/ 100) * basic_salary;

    gross_salary = basic_salary + HRA + DA;

    printf("gross salary of ramesh = %d", gross_salary);

    return 0;
}

