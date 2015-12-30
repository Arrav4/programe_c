#include <stdio.h>
#include<conio.h>
void main(){

char *nume;
int nr;
printf("Introduceti nr literelor: ");
scanf("%d", &nr);

nume=(char *) malloc(nr*sizeof(char));

printf("Introduceti numele:");
fflush(stdin);
gets(nume);
puts(nume)
;



getch();
}



