#include <stdio.h>
int main(){
    int a1,a2,a,b,c,i,n ;
    scanf ("%d%d%d",&a1,&a2,&n);
    a=a1;
    b=a2 ;
    for (i=5;i<=n;i++) {
     a=a+b-2 ;
     b=a+b-2 ;
     c=a+b-2 ; }
    printf ("%d",c) ;
    return 0; }