#include <stdio.h>
int main() {
    int n,m,i,j,amt,max,sum;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; } }
    return 0; }