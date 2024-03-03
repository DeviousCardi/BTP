#include <stdio.h>
int main() {
    int n,m,i,j,amt,sum=0,max,a;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        a=sum;
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&amt);
            sum=sum+amt; }
        if(a<sum)
        max=sum;
        else
        max=a; }
    printf("%d",max);
    return 0; }