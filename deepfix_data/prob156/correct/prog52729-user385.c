#include <stdio.h>
int main() {
    int n,m,i,j,a,s=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i=i+1) {
        for(j=1;j<=m;j=j+1)
        { scanf("%d",&a);
           s=s+a; }
        printf("%d",s); }
    return 0; }