#include <stdio.h>
int main() {
    int m,n;
    int i,k,j,sum=0;
    scanf("%d\t%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&k);
            sum= sum+k;
            printf("%d",sum); } }
    return 0; }