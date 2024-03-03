#include <stdio.h>
int main() {
    int i,j,n,m;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d ",&m);
            printf("%d",m); }
        printf("\n"); }
    return 0; }