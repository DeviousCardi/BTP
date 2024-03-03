#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,m,n,sum1=0;
    scanf("%d%d",&n,&m);
    int arr[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&arr[i][j]); }
            printf("\n"); }
    for(i=0;i<m;i++) {
        sum1=0;
        for(j=0;j<n;j++) {
            sum1=sum1+arr[i][j]; } }
    for(i=0;i<n;i++) { }
    return 0; }