#include <stdio.h>
int main() {
    int n,m,i,j,amt,sum,max;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; }
        max=sum; }
    printf("%d",max);
    return 0; }