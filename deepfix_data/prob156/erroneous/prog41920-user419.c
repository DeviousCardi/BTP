#include <stdio.h>
int main() {
    int m,n;
    scanf("%d\t%d",&n,&m);
    int mat[n][m];
    int i,j,sum=o
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            scanf("%d",&mat[i][j]);
            sum=sum+mat[i][j];
            printf("%d",sum); } }
    return 0; }