#include "stdio.h"

int main()
{
    char name[100];//char [] คือข้อความ
    short age;
    double salary;

	printf("Enter your name : ");
    scanf("%s"  , &name );
	printf("Enter your age : ");
    scanf("%hi"  , &age );
	printf("Enter your salary : ");
    scanf("%lf"  , &salary );
    printf("***********************************\n ");
    printf("Hi..... %s\n", name);
	printf("You are %d years old.\n",age);
	printf("You satary is %.2lf Baht.\n",salary);
	
    return 0;
}