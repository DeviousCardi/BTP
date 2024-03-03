#include <stdio.h>
int main() {
    int n,m,i,j,a;
    int sum1=0,sum;
    scanf("%d &d",&n,&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        if(sum>sum1) {
            sum1=sum; } }
    printf("%d",sum1);
    return 0; }