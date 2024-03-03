#include <stdio.h>
int main() {
    int n,m,max,j,i,k=1;
    scanf("%d%d",&n,&m);
    int a[m],sum[n];
    for(j=0;j<n;j++) {
        sum[j]=0;
    for(i=0;i<m;i++) {
     scanf("%d",&a[i]);
     sum[j]=sum[j]+a[i];} }
    max=sum[0];
    while(k<n) {
        if(max<=sum[k])
         max=sum[k];
         k++; }
    printf("%d",max);
    return 0; }