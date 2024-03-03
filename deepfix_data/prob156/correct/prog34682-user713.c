#include <stdio.h>
int main() {
    int n,m,i,a,sum[100],j,count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            sum[i]=sum[i]+a; }
        scanf("\n"); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(sum[i]>sum[j])
            count=count+1;
            if(count==n-i-1)
            printf("%d",sum[i]); } }
    return 0; }