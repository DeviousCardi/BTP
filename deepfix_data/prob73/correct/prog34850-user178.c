#include <stdio.h>
int main() {
    int n,m,i,j,amt,sum=0,max;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; } }
    printf("%d",sum);
    return 0; }