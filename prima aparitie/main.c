#include <stdio.h>
void main()
{
    int n,i;
    float *p, nr;
    printf("Introduceti cate numere sunt:  "); scanf("%d", &n);
    p=  malloc(n*sizeof(float));
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i); scanf("%f", &p[i]);
    }
printf(" Introduceti cifra : "); scanf("%f", &nr);
i=0;
while ( (i<n) && (p[i] != nr) )
    i++;
        if (i== n)
            printf(" Nu exista val in vector");
        else
            printf("\n Cifra %f apare pe pozitia %d ", nr,i);


    }




