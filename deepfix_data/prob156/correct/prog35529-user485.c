#include <stdio.h>
int main() {
    int n,m,i,sum,x,j,y=0;
    scanf("%d %d\n",&n,&m);
    for(i=1;i<=n;i++) {
        sum=0;
        for(j=1;j<m;j++) {
            scanf("%d ",&x);
            sum=sum+x; }
        printf("\n");
        if(sum>y)
        y=sum; }
    printf("%d",y);
    return 0; }