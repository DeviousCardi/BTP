#include <stdio.h>
int main() {
    int n,b,c,d,i,t ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    scanf ("%d",&d) ;
    for (i=n-d;i<=n-1;i++) {
        printf ("%d ",a[i]) ; }
    return 0; }