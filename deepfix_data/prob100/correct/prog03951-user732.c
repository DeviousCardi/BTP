#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    int j,k,max;
    scanf("%d%d",&n,&m);
    int B[m] ;
        for(j=0;j<=m;j++ )
    {for(k=0;k<=n;k++){
   { int D[n];
   scanf("%d",&D[k]) ;
    D[0]=max ;
    max=D[k] ;
    D[k]=D[0] ;
    B[j]= D[k] ; }
    B[0]=max ;
    max=B[j] ;
    B[j]=B[0] ; } }
   printf("%d",B[j]);
    return 0; }