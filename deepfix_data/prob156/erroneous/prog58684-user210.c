#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int num[n][m];
    for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
        scanf("%d",num[i][j]); }
    scanf("\n"); }
    int sum[n];
    for(i=0;i<n;i++) {
        sum[i]=0;
        for(j=0;j<m;j++) {
            sum[i]=(sum[i]+num[i][j]); } }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(sum[i]>sum[j]) {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp; } } }
    printf("%d",sum[n-1]);
    return 0; }