#include <stdio.h>
int main() {
    int sum,n,m,i,j,a[20][20],max=0;
    scanf("%d %d",&n,&m);
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<m ; j++)
        scanf("%d ",&a[i][j]); }
    for (i=0 ; i<n ; i++) {
        sum=0;
        for (j=0 ; j<m ; j++)
        sum =+ a[i][j];
        if ( sum > max)
            max=sum; }
printf("%d",max);
return 0; }