#include <stdio.h>
#include<conio.h>

void main()
{
    int num1, num2, S, D, P  ;
float I;
char optiune,sum='adunare',prod='scadere',imp='impartire',dif='scadere';
printf("Alege operatia : "); scanf("%s", &optiune);

printf("Dati num1= ");  scanf("%d", &num1);
printf("Dati num2= "); scanf("%d", &num2);
printf("   num1=%d \n  num2= %d ", num1,num2);
S=num1 + num2;
D=num1-num2;
P=num1*num2;
I=(float)num1/num2;

if(optiune==sum)

    printf("\nSuma dintre %d si %d este %d", num1,num2,S);
    else if (optiune==dif)
     printf("\nScaderea dintre %d si %d este %d", num1,num2,D);
    else if(optiune==prod)
     printf("\nProdusul dintre %d si %d este %d", num1,num2,P);
    else if(optiune==imp)
     printf("\nImpartirea dintre %d si %d este %.2f", num1,num2,I);


getch();
}








