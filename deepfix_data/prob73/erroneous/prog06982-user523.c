#include <stdio.h>
int main() {
    int n,m,i,x,sum,max;
    scanf("%d %d",&n,&m);
    int door[n + 1];
    for(i=1;i<=n;i++) {
        for(j=1,sum=0;j<=m;j++) {
            scanf("%d",&x);
            sum=sum+x; }
        door[i]=sum; }
    max=0;
    for(i=1;i<=n;i++) {
        if(door[i]>max) {
            max=door[i]; } }
    printf("%d",max);
    return 0; }