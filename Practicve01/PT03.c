#include <stdio.h>
#include <conio.h>
#define wow printf("==================================\n");

void main()
{
    float id,salary,Salary_total ;
    char name[50];


    wow
    printf("-       Program  Salary  Employee       -\n");
    wow
    printf("Enter employee id : ");
    scanf("%f" , &id );

    printf("Enter employee name : ");
    scanf("%s" , &name );

    printf("Enter employee salary : ");
    scanf("%f" , &salary );

    wow

    Salary_total = salary - salary *7/100-500;
    printf(" Salary total is \" %.2f \" Baht\n" , Salary_total );

    wow

    getch();

}