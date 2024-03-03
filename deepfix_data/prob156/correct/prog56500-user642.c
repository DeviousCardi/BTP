#include <stdio.h>
int main() {
    int a,n,m,i,j,g=0,b=0;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d",&a);
            g=g+a; }
    scanf("\n");
    if (g>b) b=g; }
    printf("%d",b);
    return 0; }