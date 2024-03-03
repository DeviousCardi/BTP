#include <stdio.h>
int main() {
    int m,n,i,j,v,max=0,sum;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=i;j<=m;j++) {
            scanf("%d",&v);
            sum = sum + v; }
        if(sum>max) {
            max=sum; } }
    printf("%d",max);
    return 0; }