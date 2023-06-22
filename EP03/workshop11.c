#include <stdio.h>
#include <conio.h>

void main()
{
    int number;

    printf("Input number : ");
    scanf("%d" , &number);
    printf("---------------------------------\n");

    switch( number )
    {
        case 2  :   printf("A.....");
                    printf("B.....");
                    break; //แต่ละ case ควรจะมี break;
        case 10 :   printf("C.....");
                    break;
        case 99 :   printf("D.....");
                    break;
        default :   printf("WoW....\n");  //แต่ละ switch ควรจะมี default
                    printf("Woo....\n");

    }
    printf("IOT.....\n");

    getch();
}