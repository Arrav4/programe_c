#include <stdio.h>
#include<conio.h>
#define m 10
#define n 15
void main(){

int v[m][n];
int l,c;
    printf("Dati nr de linii: ");scanf("%d", &l);
    printf("Dati nr de coloane: ");scanf("%d",&c);
    scriere(v,l,c);
    afisare(v,l,c);
}


void scriere(int v[m][n],int l, int c){
int i,j;
for(i=0;i<l;i++){
    for(j=0;j<c;j++){
        printf("v[%d][%d]=", i,j); scanf("%d",&v[i][j]);}

}
}


void afisare(int v[m][n],int l, int c){
int i,j;
for(i=0;i<l;i++){
    for(j=0;j<c;j++){
        printf("%d       ",v[i][j]);


        }
 printf("\n");
}
}
