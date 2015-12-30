#include <stdio.h>
#include<conio.h>
#include<time.h>


void main()
{
    int an=0, moarte;
    srand(time(NULL));
    int varsta=rand() %105;
    printf("%d", varsta);

    for( ;an<=varsta; an++)
    {
        printf("\nA trait %d ani", an);
        if(an==varsta){
 printf("\n\n A MURIT LA VARSTA DE %d ANI!", varsta);}


}
}
