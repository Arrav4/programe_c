#include <stdio.h>
void scriere(int n, float *p)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n v[%d] = ",i ); scanf("%f", &p[i]);
    }
return;
}
float rezolvare(int n, float *p, float nr,  int j, float *poz)
{
int i;
j=0;
i=0;
{
while(nr!=p[i] && i<n)   i++;
if (nr==p[i])

    i=poz[j];

    else
if(i==n)
    printf(" \nNu exista nuamrul");
}
return poz[j];
}

void afisare( int n, float *poz, int j)
{
int i;
    for (i=0; i<n; i++)
        printf("\t v[%d]",j);

}


void main()
{

    int n, j;
    float nr,*p,*poz;
    printf("Introduceti cate numere are vectorul: ");  scanf("%d", &n);

    p = (float*)malloc(n*(sizeof(float)));
    scriere(n,p);

    printf("\nIntroduceti numarul: ");  scanf("%f", &nr);
    rezolvare(n,p,nr,j,poz);

    free(p);
    p=NULL;

    printf("\n nr apare pe pozitiile : ");

    afisare(n,poz,j);

    free(poz);
    poz=NULL;
}



