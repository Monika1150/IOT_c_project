#include "stdio.h"

void main()
{
    //ประกาศตัวแปล declaation variable
    int midtermScor = 50;
    int final_score;
    int total_score;
    double gpa = 3.99;

    final_score = 20;
    total_score = midtermScor + final_score;

    printf("Midterm is :%d \n",midtermScor);
    printf("Final is :%d \n",final_score);
    printf("Total is :%d \n",total_score);
    printf("My GPA is :%lf\n",gpa);
    printf("My GPA is :%.2lf\n",gpa);
    printf("My GPA is :%.4lf\n",gpa);
    printf("--------------------------------\n");
    //50+20 = 70
    printf("%d + %d = %d ได้เกรด %.2lf\n",midtermScor, final_score, total_score, gpa);
}