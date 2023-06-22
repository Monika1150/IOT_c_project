#include <stdio.h>
#include <conio.h>

void main()
{
    int score = 100;

    if ( score  >= 80 )
    {
        printf ("Grade A\n");
    }
    else if( score  >= 70 )
    {
        printf ("Grade B\n");
    }
    else if( score  >= 60)
    {
        printf ("Grade C\n");
    }
    else if( score  >= 50 )
    {
        printf ("Grade D\n");
    }
    else    //else ตัวสุดท้ายจะมี if หรือไม่มีก็ได้แล้วแต่โจรท์
    {
        printf ("Grade F\n");
    }

    printf ("IOT........");
    getch();
}