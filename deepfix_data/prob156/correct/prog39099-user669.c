#include <stdio.h>
#include <limits.h>
int main() {
    int m,n,i,j,sum=0,a;
    scanf("%d%d",&n,&m);
    for (i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        printf("%d\n",sum); }
    return 0; }