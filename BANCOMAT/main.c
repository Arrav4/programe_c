#include <stdio.h>

#include <conio.h>

void main()
{

    int optiune;
int val;
    printf("\t\t\n\n\t\t\t\tBUN VENIT LA BCR!");
    printf("\n\n\t 1. Interogare sold");
    printf("\n\t 2. Extragere numerar");
    printf("\n\t 3. Verificare parola");
    printf("\n\t 4. Iesire");
    printf("\n\n\t Alegeti o optiune: "); scanf("%d", &optiune);


switch(optiune)
{

    case 1 : printf(" \n\tAveti 300 RON disponibili");
    break;
    case 2 : printf("\n\tSelectati suma:"); scanf("%d", &val);
    printf("\n\tFelicitari! Ati extras: %d RON", val);
    break;
    case 3 : printf("\n\tParola este: 123");
    break;
    case 4 : printf("\n\tVa multumim! La revedere!");
    break;
    default : printf("\n\t ATI TASTAT UN BUTON GRESIT ! ");


}

getch();




}
