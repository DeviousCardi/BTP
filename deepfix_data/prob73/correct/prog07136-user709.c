#include <stdio.h>
int main() {
    int m,n,i,j,a[1000],s=0;
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
        { scanf("%d",a[j]);
                    s=s+a[j];
        }printf("%d\n",s); }
    return 0; }