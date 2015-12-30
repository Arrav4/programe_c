#include <stdio.h>


typedef struct Elev
{
    char nume[20];
    char prenume[20];
    float medie;
    int varsta;
    char sex;
}Elev;

void main(){

Elev x;
gets(x.nume);
gets(x.prenume);
printf("\nDati media : "); scanf("%f", &x.medie);
printf("\nDati varsta : "); scanf("%d", &x.varsta);
fflush(stdin);
printf("\nDati sexul : "); scanf("%c", &x.sex);

printf("\n\t Media este: %f", x.medie);

printf("\n\t Varsta este: %d", x.varsta);
printf("\n\t Sexul este: %c", x.sex);
}
