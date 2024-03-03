#include <stdio.h>
int main() {
    int n,m,i,j,s=0,t;
    scanf("%d%d",&n,&m);
    int arr[n][m],sum[n];
    for(i=0;i<=(n-1);i++) {
        for(j=0;j<=(m-1);j++)
        scanf("%d",&arr[i][j]); }
    for(i=0;i<=(n-1);i++) {
        for(j=0;j<=(m-1);j++)
        s=s+arr[i][j];
      sum[i]=s;
      s=0; }
   for(i=n-2;i>=0;i--) {
       if(sum[i]>sum[i+1]) {
            t=sum[i];
            sum[i]=sum[i+1];
           sum[i+1]=t; } }
    printf("%d",sum[n]);
    return 0; }