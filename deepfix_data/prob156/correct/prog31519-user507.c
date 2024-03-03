#include <stdio.h>
int main() {
    int n,m,i,j,k,l,sum1=0,sum2=0 ;
    scanf ("%d%d\n",&n,&m);
    int d[n],h[m] ;
    for (i=1;i<=m;i++) {
    printf ("\n") ;
      for (j=1;j<=m;j++) {
        scanf ("%d",&h[j]) ; } }
    for (k=1;k<=m;k++) {
        sum1=sum1+d[k]; }
    for(l=1;l<=m;l++) {
        sum2=sum2+h[l]; }
    if (sum1>sum2)
    printf ("%d",sum1) ;
    else
    printf ("%d",sum2) ;
    return 0; }