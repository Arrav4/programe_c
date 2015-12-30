#include <stdio.h>

void main()
{
    float v[100],x;
    int i,n;
    printf("Grad polinom : n= "); scanf("%d", &n);
    printf("\nIntroduceti coeficientii polinomulu: ");

    for(i=0; i<=n; i++)
    {
        printf("\nv[%d]= ", i); scanf("%f", & v[i]);

    }
    printf("Introduceti valoarea intr un anumit punct : \n"); scanf("%f", &x);

   float val;
   val= v[0];
   float temp=1;

    for (i=1; i<=n; i++)
{
        temp= temp*x;
        val=val + v[i]*temp;
}
    printf("Val pol in pct %5.2f este %5.2f", x,val);

}


// a0 + a1 * x^0 + a2 * x1 +...+ an * x^n= ?
