#include <stdio.h>
int main(){
   int n,count,i,j,k ;
   scanf ("%d",&n) ;
   int a[n] ;
   int b[n] ;
   b[0]=1 ;
    for (i=0;i<=n;i++) {
        scanf ("%d",&a[i]) ; }
    b[1]=a[0] ;
    for (j=2;j<=n;j++) {
        t=b[j-1] ;
        b[j]=a[t] ;
        printf ("%d",b[j]) }
        return 0; }