#include <stdio.h>
#include <conio.h>

#define PA printf("-----------------------------\n");
//int=%d,   flod=%f,    double=%lf,     char[]=%s,      char=%c ->Character
void main()
{
    char car_number[20];    // ->   %s
    double  carWeight;  //  ->  %lf

    PA
    printf(" Program Truck\n ");
    PA
    printf(" Input car number : ");
    scanf("%s" , &car_number);
    printf(" Input car weight : ");
    scanf("%lf" , &carWeight);
    PA

    if( carWeight <= 2500 )
    {
        printf("PASS....... ^-^\n");
    }
    else
    {
        printf("NOT PASS.......T-T\"");
    }

    getch();
}