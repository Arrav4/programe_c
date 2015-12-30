#include <stdio.h>


void main()
{
    float v[20], nr;
    int n,i, poz;
    printf(" Introduceti cate numere are vectorul: "); scanf("%d", &n);
    printf("Introduceti elementele: ");
        for( i=0; i<n; i++)
        {
            printf("\n v[%d] = ", i); scanf("%f", &v[i] );
        }

        printf("\nIntroduceti valoarea cautata : "); scanf("%f", &nr);

        i=0;
        poz=0;
        for(i = 0; i< n; i++)
        {
            if ( v[i]== nr)
            poz = i;
        }
         if (v[poz]!= nr)
                    printf("\nNu exista ");
                    else
        printf("\nUltima aparitie a nr %5.1f este pe pozitia %d ", nr, poz);



}
