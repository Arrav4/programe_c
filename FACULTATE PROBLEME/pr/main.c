#include <stdio.h>
#include<conio.h>

void afisare(){
printf("\nSALUUUUUT !");
}

int max(int x, int y){
int maxim;
if(x>y)
    maxim=x;
else maxim=y;
return maxim;

}
void main()
{
    int a,b;
    int var;
    afisare();
    printf("\nDati a =  "); scanf("%d", &a);
    printf("\nDati b =  " ); scanf("%d", &b);
    var= max(a,b);
    printf("\tMaximul dintre %d si %d este %d",a,b,var);
}


