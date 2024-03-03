#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf ("%d%d\n",&n,&m);
    int h[m],sum[n] ;
    for (i=0;i<n;i++) {
        sum[i]=0; }
    for (i=0;i<n;i++) {
      for (j=0;j<m;j++) {
        scanf ("%d ",&h[j]) ;
        sum[j]=sum[j]+h[j] ; }
        printf ("\n") ; }
    for (i=0;i<n;i++)
    printf ("%d",sum[i]) ;
    return 0; }