#include <stdio.h>
int main() {
    int n,i,j,k,count=0 ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
    scanf ("%d",&a[i]) ;
    printf ("%d",a[i]) ; }
    for (i=1;i<n-1;i++) {
        if (a[i]>a[i-1]&&a[i]>a[i+1]) {
            count=count+1; } }
    printf ("%d",count) ;
    return 0; }