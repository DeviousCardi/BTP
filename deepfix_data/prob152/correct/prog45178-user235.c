#include <stdio.h>
int sum (int a[], int s,int e) {
    int c=0 ;
    for (int i=s;i<=e;i++)
    c=c+a[i] ;
    return c ; }
int main() {
    int b,c,n,i,j,k ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++)
    scanf ("%d",&a[i]) ;
    for (i=0;i<n;i++) {
        if (sum(a,0,i)==sum(a,i,n-1))
        break ; }
    if (i==n)
    printf ("NO") ;
    else
    printf ("YES") ;
    return 0; }