#include <stdio.h>
int main() {
    int n,m,a,i,j,count=0,cmax=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            count=count+a; }
        if(cmax<count) {
            cmax=count; } }
    printf("%d",cmax);
    return 0; }