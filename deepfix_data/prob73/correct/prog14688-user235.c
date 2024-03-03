#include <stdio.h>
int main() {
    int m,n,sum,i,j ;
    int a[m] ;
    scanf ("%d %d",&m,&n) ;
    printf ("%d %d",m,n) ;
    for (i=1;i<=m;i++) {
        for (j=1;j<=n;j++) {
            scanf("%d",&a) ;
            sum=sum+a ; }
        a[i]=sum;
        printf ("%d\n",a[i]) ;
        sum = 0; }
    return 0; }