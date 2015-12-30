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

float max;
int s[10], nr=0;
max= a[0][0];
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++)
{
    if(a[i][j]>max)
        max=a[i][j];

}
printf("\nFirma %d are inregistrata suma maxima: %.3f", i,max);
        max=0;
}

/*
for(i=0;i<m;i++)
{
    j=0;
    while(j<n && a[i][j] != max)
        j++;
    if(j<n)
        s[nr]=j;
    nr++;

} */
/*
printf("max=%f" , max);

for(i=0;i<nr;i++)
    printf("\n%d", s[i]);
*/
}
