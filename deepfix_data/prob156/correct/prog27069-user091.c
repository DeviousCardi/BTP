#include <stdio.h>
int main() {
    int i,n,m,j,k,sum=0,max;
    scanf("%d %d",&n,&m);
    while(i<=n) {
        while(j<=m) {
            scanf("%d",&k);
            sum=sum+k; }
        max=sum;
        if(max<sum) {
            max=sum; } }
       printf("%d",max);
    return 0; }