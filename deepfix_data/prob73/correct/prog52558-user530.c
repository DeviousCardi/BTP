#include <stdio.h>
int main() {
    int n,m,sum,mi,i,j;
        scanf("%d %d",&n,&m);
    int sumi[n];
    for(i=0;i<=n-1;i++){
        sum=0;
        for(j=1;j<=m;j++){
            scanf("%d",&mi);
            sum=sum+mi; }
        sumi[i]=sum; }
    return 0; }