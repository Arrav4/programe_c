#include <stdio.h>
#include<conio.h>

void main()
{
    int num1, num2, S, D, P, M ;
float I;
 //num1=10;
 //num2=21;
 //printf(" num1=%d \n num2=%d", num1,num2);

/*intf("adresa variabilei num1= %d", &num1);
printf("\nDati valoare num1=");
scanf("%d", &num1);
printf("\nNum1=%d", num1);
*/

printf("Dati num1= ");  scanf("%d", &num1);
printf("Dati num2= "); scanf("%d", &num2);
printf("   num1=%d \n  num2= %d ", num1,num2);
S=num1 + num2;
D=num1-num2;
P=num1*num2;
I=(float)num1/num2;


printf("\nSuma dintre %d si %d este %d", num1,num2,S);
printf("\nScaderea dintre %d si %d este %d", num1,num2,D);
printf("\nProdusul dintre %d si %d este %d", num1,num2,P);
printf("\nImpartirea dintre %d si %d este %.2f", num1,num2,I);

getch();
}
