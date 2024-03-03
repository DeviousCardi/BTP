#include <stdio.h>
#include <math.h>
int main() {
    int n,m,i,j,a,sum1=0,r,max;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
        scanf("%d",&a);
        sum1=sum1+a; }
    r=max;
    printf("%d",r);
    return 0; }