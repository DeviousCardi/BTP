#include <stdio.h>
#include <math.h>
int main() {
    int n,m,i,j,a,sum1=0,r,max=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
        sum1=0;
        for(j=1;j<=m;j++)
        {scanf("%d",&a);
        sum1=sum1+a; }
        if(max<sum1)
         max=sum1; }
    printf("%d",max)
    return 0; }