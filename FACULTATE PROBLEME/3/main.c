#include <stdio.h>
#include <stdlib.h>


// m societati , n ani, i companie , j castig

void main()
{

    int m,n,i,j;
    float a[10][15];
    printf("Introduceti anii: "); scanf("%d", &m); printf("Introduceti numarul de firme:"); scanf("%d", &n);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        printf("a[%d][%d]= " ,i,j); scanf("%f", &a[i][j]);

    }
}
