#include <stdio.h>
int main() {
    int n,m,i,j,amt,sum=0,max=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        sum=0
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; }
        int temp[i]=sum;
        if(temp[i+1]>temp[i])
        max=temp[i+1]; }
    printf("%d",sum);
    return 0; }