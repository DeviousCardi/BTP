#include <stdio.h>
int main() {
    int n,m,i,j,amt,sum=0,max=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        int temp=max;
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; }
        if(sum>temp)
        max=sum;
        else
        max=temp; }
    printf("%d",max);
    return 0; }