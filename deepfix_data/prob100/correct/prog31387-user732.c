#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,dummy;
    int i,j,max;
    scanf("%d%d",&n,&m);
    max=-9999 ;
   int A[n] ;
    int B[m] ;
    for(i=1;i<=m;i++ ){
        for(j=0;j<=n;j++ )
    scanf("%d",&dummy);
    dummy=max ;
    max =A[j] ;
    A[j]=dummy ;
       B[j]= A[j] ;
    dummy=max ;
    max=B[j] ;
    B[j]=dummy ; }
 {  printf("%d",B[m]); }
    return 0; }