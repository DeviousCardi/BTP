#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    int gold;
    int total;
    int max=0;
    for(i=1;i<=n;i++) {
        total=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&gold);
            total=total+gold; }
        if(total>max) {
            max=total; } }
    printf("%d",max);
    return 0; }