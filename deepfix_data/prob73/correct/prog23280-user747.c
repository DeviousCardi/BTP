#include <stdio.h>
int main() {
    int n,m,i,j,a,b=0;
    scanf("%d %d",&n,&m);
    for (i=1; i<=n; i=i+1) {
        b=0;
            for (j=1; j<=m; j=j+1) {
                scanf(" %d",&a);
                b=b+a; }
            printf("%d\n",b); }
    return 0; }