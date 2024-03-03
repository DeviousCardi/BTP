#include <stdio.h>
int main() {
    int n,m,i,j,a,b=0;
    scanf("%d %d",&n,&m);
    for (i=1; i<=m; i=i+1) {
            for (j=1; j<=n; j=j+1) {
                scanf(" %d",&a);
                b=b+a; }
            printf("%dP\n",b); }
    return 0; }