#include<stdio.h>


void main () {
float *v;
int n,i;
printf("Introduceti numarul elementelor: "); scanf("%d", &n);
v = (float*) malloc(n*sizeof(float));
printf("Introduceti elementele: ");
scriere(n,v);

for(i=0;i<=n;i++)
    {
        printf("\n n = %d si v[%d] = %d " ,scriere(n,v,i));

    }

printf("\nSUma este %d", suma(n,v) );
free(v);
v=NULL;

}

void scriere(int n, float *v)
{
int i=0;
for (i=0;i<n;i++)
    {
     printf("\n v[%d] = ", i ); scanf("%f", &v[i]);

    }
}

int suma(int n, float *v )
{

    int i, S=0;
    for(i=0;i<n;i++)
    {
        S=v[i]+S;
        printf("\n v[%d] este %d, %d", i,v[i],n);

    }
return S;
}
