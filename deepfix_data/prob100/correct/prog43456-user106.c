#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,m,n,sum=0;
        scanf("%d %d\n",&n,&m);
    int mat[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d ",&mat[m][n]); }
            printf("\n"); }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            sum=sum+mat[m][n]; }
        printf("%d",sum); }
    return 0; }