#include <stdio.h>
int main() {
    int n, m;
    scanf("%d%d",&n,&m);
    int i, j,t, sum=0, max;
    for(i=1;i<=m;i++) {
            scanf("%d",&t);
            sum=sum+t; }
        max=sum;
        printf("%d\n",max);
    for(j=0;j<=n;j++) {
       for(i=1,sum=0;i<=m;i++) {
            scanf("%d",&t); printf("%d ",t);
            sum=sum+t; }
        printf("%d\n",sum);
        if (sum>max) max=sum;
        printf("%d ",max); }
    return 0; }