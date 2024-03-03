#include <stdio.h>
int main() {
    int n,m,i,j,sum,g,s;
    sum=0;
    s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&g);
            s=s+g; }
        if(s>sum) {
            sum=s; }
        s=0; }
    printf("%d",sum);
    return 0; }