#include <stdio.h>
int main(){
    int n,i,j,k,a=0,b,c,d,e ;
    scanf ("%d",&n) ;
    for (i=1000;i>=1;i=i/10) {
        b=n/i ;
        a=a+b ;
        n=n-i*b ; }
 printf ("%d",a) ;
    return 0; }