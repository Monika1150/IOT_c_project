// โจทย์ข้อที่ 1
#include <stdio.h>
#include <conio.h>

#define PA printf("+++++++++++++++++++++++++++++++\n");
#define WA printf("-------------------------------\n");

void main()
{
    float widths, longs, area_square, bases, highs, area_triangle;

//********************** สี่เหลี่ยม **************************************
    
    PA
    printf(" Program Area Shapes \n");
    PA
    printf("Input widths : ");
    scanf ("%f" , &widths );

    printf("Input longs : ");
    scanf ("%f" , &longs );
    printf("**************************\n");
    area_square = widths * longs;
    printf("Square area : %.2f \n" , area_square);
    PA
    WA
//*********************** สามเหลี่ยม *************************************

    PA
    printf(" Program Area Shapes \n");
    PA
    printf("Input bases : ");
    scanf ("%f" , &bases );

    printf("Input highs : ");
    scanf ("%f" , &highs );
    printf("**************************\n");
    area_triangle = bases * highs / 2;
    printf("Triangle area : %.2f \n" , area_triangle);
    PA
    WA
    
    getch();
}