#include <stdio.h>
int main() {
    int m,n,i,j,k ;
    scanf ("%d",&m) ;
    int a[m] ;
    for (i=0;i<m;i++) {
        scanf("%d",&a[i]) ; }
    scanf ("%d",&n) ;
    int b[n] ;
    for (i=0;i<n;i++) {
        scanf("%d",&b[i]) ; }
    for(i=0;i<m;i++) {
        if(a[i]==b[0]) {
        k=i ; }
        else
        printf ("NO"); }
    for (i=k;i<k+n;i++) {
        if(a[i]!=b[i-k])
        break ; }
    if (i=k+n)
    printf ("YES") ;
    else printf ("NO") ;
	return 0; }