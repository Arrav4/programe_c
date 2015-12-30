#include <stdio.h>
#include<malloc.h>
void main()
{
float *x,a;
int n,i,*poz,nrpoz;
printf("\nIntroduceti dimensiunea vectorului, n= "); scanf("%d", &n);
x=(float*) malloc(n*sizeof(float));
for (i=0;i<n;i++){
    printf("x[%d]= ", i); scanf("%f", x+i);}

printf("\nIntroduceti val cautata, a= "); scanf("%d", &a);
poz=(int*) malloc(n*sizeof(int));
nrpoz=0;
for(i=0;i<n;i++){
    if(x[i] == a )   poz[nrpoz++] = i;
    if(!nrpoz)

        printf(" \nVal %5.2f nu exista in vector." , a);
    else
    {
        printf("\nVal %5.2f apare pe pozitiile: ", a);
        for(i=0; i<nrpoz; i++)
            printf("%d", poz[i]);
            free(x);
        free(poz);
    }


}



;
}



