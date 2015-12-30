#include <stdio.h>
#include<conio.h>
#define DIM 9



void main(){
int a[DIM];
printf("\n\tFunctia citire:");
scriere(a,DIM);
printf("\n\tFunctia afisare:");
printf("\n\tVectorul este:");
afisare(a,DIM);
printf("\n\tFunctia prelucrare:");
printf("\n Vectorul este:");
prelucrare(a,DIM);
}

void scriere(int a[], int dim)
{
int i;
for (i=0;i<dim;i++){
    printf("\n Dati a[%d]=" ,i); scanf("%d", &a[i]);
}
}

void afisare(int a[], int b)
{
    int i;

    for(i=0;i<b;i++){
        printf("%4d",a[i]);
    }
}

void prelucrare(int a[], int c)
{
    int i;
    for(i=0;i<c;i++){
        a[i]=a[i+2];
        printf("%5d", a[i]);
    }
}








