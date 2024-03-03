#include <stdio.h>
#include <limits.h>
int main() {
    int m,n,i,j,sum=0,a;
    scanf("%d%d",&n,&m);
    for (i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        printf("%d"sum); }
    return 0; }