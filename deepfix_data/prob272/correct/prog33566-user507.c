#include <stdio.h>
int main(){
    int a1,a2,a,b,x,i,n ;
    scanf ("%d%d%d",&a1,&a2,&n);
    a=a1;
    b=a2 ;
    for (i=3;i<=n;i++) {
     x=b ;
     b=a+b-2;
     a=x ; }
    printf ("%d",b) ;
    return 0; }