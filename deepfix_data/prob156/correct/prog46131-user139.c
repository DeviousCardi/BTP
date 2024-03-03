#include <stdio.h>
int main() {
    int i,j,n,m,sum,max,value;
    scanf("%d%d\n",&n,&m);
    max=0;
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d ",&value);
            sum =sum+value; }
        scanf("\n");
        if(sum>=max) {
            max=sum; } }
    printf("%d",max);
    return 0; }