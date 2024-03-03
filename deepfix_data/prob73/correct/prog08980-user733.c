#include <stdio.h>
int main() {
    int n,m,i,j,gsum=0,sum=0,amount;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&amount);
            sum=sum+amount; }
        if(sum>gsum)
        gsum=sum; }
    printf("%d",gsum);
    return 0; }