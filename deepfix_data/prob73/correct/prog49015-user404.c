#include <stdio.h>
int main() {
    int n,m,i,j,s=0,t;
    int arr[2][3],sum[2];
    for(i=0;i<=1;i++) {
        for(j=0;j<=2;j++)
        scanf("%d",&arr[i][j]); }
    for(i=0;i<=1;i++) {
        for(j=0;j<=2;j++)
        s=s+arr[i][j];
        sum[i]=s;
        s=0; }
    for(i=0;i<=1;i++) {
        if(sum[i]>sum[i+1]) {
            sum[i]=t;
            sum[i]=sum[i+1];
            sum[i+1]=t; } }
    printf("%d",sum[2]);
    return 0; }