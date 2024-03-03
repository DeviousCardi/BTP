#include <stdio.h>
int main(){
    int n,i,j,k,a=0,b,c,d,e ;
    scanf ("%d",&n) ;
    for (i=1000;i>=1;i=i/10) {
        b=n/i ;
        a=a+b ;
        n=n-i*b ; }
    for (j=2016;j>=2016;j++) {
        if (j%a==0) {
            printf ("%d",j) ;
            break; } }
    return 0; }