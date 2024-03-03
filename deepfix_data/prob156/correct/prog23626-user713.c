#include <stdio.h>
#include<limits.h>
int main() {
    int n,m,i,a[100],sum[100]={0,0,0},j,max;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d ",&a[j]);
            sum[i]=sum[i]+a[j]; }
        scanf("\n"); }
    for(i=0;i<n;i++) {
        if(sum[i]>INT_MIN)
        max=sum[i]; }
    printf("%d",max);
    return 0; }