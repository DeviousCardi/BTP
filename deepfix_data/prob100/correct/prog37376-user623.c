#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d%d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",mat[i][j]); }
    return 0; }