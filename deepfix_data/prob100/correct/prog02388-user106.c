#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,m,n,sum=0;
    scanf("%d%d",&n,&m);
    int arr[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&arr[i][j]); }
            printf("\n"); }
    for(i=0;i<m;i++) {
        for(j=i;j<n;j++) {
            sum=sum+arr[i][j]; }
        printf("%d ",sum); }
    return 0; }