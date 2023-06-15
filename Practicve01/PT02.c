// โจทย์ข้อที่ 2

#include <stdio.h>
#include <conio.h>
#define wow printf("============================\n");

void main()
{
    float price_begin, sale ;
    char name[50];

    wow
    printf("-         Program  Product  Shop      -\n");
    wow
    printf("Enter product name : ");
    scanf("%s" , &name );

    printf("Enter price begin : ");
    scanf("%f" , &price_begin );

    wow

    sale = price_begin - price_begin * 10/100;
    printf(" Price for sale is  \" %.2f \" Baht\n" , sale );

    wow

    getch();

}