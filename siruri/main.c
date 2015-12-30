#include <stdio.h>
#include<conio.h>
void main()
{

int a,b;
printf("a= "); scanf("%d", & a);
printf("\nb= "); scanf("%d", & b);
schimba(&a,&b);
printf(" \nNoile valori:");
printf("\na=%d ", a);
printf("\nb=%d ", b);
getch();
}

void schimba(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
     *b=t;


}
