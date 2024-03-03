#include <stdio.h>
int main() {
    int n,m,i,j,a,r=0,s=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            r=r+a; }
        if(r>=s)
            s=r; }
    printf("%d",s);
    return 0; }