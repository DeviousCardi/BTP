#include <stdio.h>
int main() {
    int n,m,i,j,h,d;
    j=1;
    scanf("%d %d",&n,&m);
    int t[n];
    for(i=0;i<=n-1;i++) {
        t[i]=0;
        while(j<=m) {
            scanf("%d",&h);
            t[i]+=h; } }
    printf("%d",t[0]);
    return 0; }