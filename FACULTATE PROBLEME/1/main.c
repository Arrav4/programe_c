//Se dau vanzarile a m produse intr o per de n zile . Sa se det prod care au inregistrat vanzari ct pe toata per inregistrata.

#include <stdio.h>
void main(){

int m,n,i,j;
float a[10][15];


    printf("Introduceti numarul de produse vandute "); scanf("%d", &m); printf("Introduceti nuamrul de zile in care s-au vandut produsele:"); scanf("%d", &n);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
    {
        printf("a[%d][%d]= " ,i,j); scanf("%f", &a[i][j]);

    }

     int v[10],nr=0;
      for(i=1;i<=m;i++)
      {
          j=1;
          while(j<n-1 && a[i][j]==a[i][j+1])
            j=j+1;
          if(j==n-1)
          {
              v[nr]=i;
              nr=nr+1;}
          }
          if(nr==0)
            printf("Nu exista produse");
          else
             for(i=1;i<=nr;i++)
             printf("%i",v[i]);



      }







