#include <stdio.h>
#include <conio.h>
#define wow printf("**************************************\n");

void main()
{
    float money, money_share ;
    int person;

    wow
    printf("-       program Money Share       -\n");
    wow
    printf("Input money : ");
    scanf("%f" , &money );

    printf("Input person : ");
    scanf("%d" , &person );

    wow

    money_share = money / person;
    printf(" money_Share is \" %.2f \" Baht\n" , money_share );

    wow

    getch();

}