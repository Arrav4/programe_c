#include <stdio.h>

// sa se det maximul si toate aparitiile lui


#include<conio.h>

void citire(float *v, int *n)
{
    int i;
    printf("n= "); scanf("%d", &*n);

    for(i = 1; i <= *n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%f", &v[i]);
    }
}

void maxim(float *v, int n, float *max, int *poz, int *nr)
{
    int i;
    *max = v[0];
    poz[0]=0;
    *nr = 1;
    for(i = 1; i < n; i++)
    {
        if (v[i] == *max)
        {
            poz[*nr]=i;
            (*nr)++;
        }
        else if(v[i] > *max)
        {
            *nr = 1;
            poz[0] = i;
            *max = v[i];
        }
    }
}

void main()
{
    float v[100], max;
    int d, nrap, i, poz[100];

    citire(v,&d);
    maxim(v, d, &max, poz, &nrap);

    printf("maximul este %.1f ", max);

    for(i = 0; i < nrap; i++)
        printf("\n Apare pe locul %d", poz[i]);
}
