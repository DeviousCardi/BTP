#include <stdio.h>
int main() {
    int n,m,sum,mj,i,j,maxsum=0;
        scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=m;j++){
            scanf("%d",&mj);
            sum=sum+mj; }
        if(sum>maxsum)
        maxsum=sum; }
    printf("%d",maxsum);
    return 0; }