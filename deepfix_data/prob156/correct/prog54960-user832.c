#include <stdio.h>
#include<limits.h>
int main() {
    int m,n,sum=0,amount,sum_max=INT_MIN;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf("%d ",&amount);
            sum=sum+amount; }
        printf("\n");
        if(sum>sum_max) {
            sum_max=sum; }
        sum=0; }
    printf("%d",sum_max);
    return 0; }