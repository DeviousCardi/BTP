#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    int i,j,k,max;
    scanf("%d%d",&n,&m);
  int A[n] ;
    int B[m] ;
    for(i=0;i<=m;i++ ){
        for(j=0;j<=n;j++ )
    {for(k=0;k<=n;k++){
    int D[n];
    D[0]=max ;
    max=D[k] ;
    D[k]=D[0] ;
    B[j]= D[k] ; } }
    B[0]=max ;
    max=B[j] ;
    B[j]=B[0] ; }
   printf("%d",B[0]);
    return 0; }