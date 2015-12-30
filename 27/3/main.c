#include <stdio.h>

void main()
{    float v[100];
    int nr,i;
    printf("Introduceti cate numere are vectorul "); scanf("%d" , &nr);

    for(i=0;i<nr;i++)
    {
        printf("v[%d] =", i ); scanf("%f", & v[i]);
    }

float S=0;

    for(i=0;i<nr;i++)
        if(v[i]>0)

        S=S+v[i];
        else
            printf(" Nu exista numere pozitive");

printf(" \nSuma este %.2f ", S);

}




