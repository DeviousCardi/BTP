#include <stdio.h>
int main() {
    int n,i,r,j,k,l,m;
    scanf("%d",&n);
    if((n<=1000)&&(n>=2)){
        int mon[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&mon[i]);
    }r=mon[0];
    for(i=0;i<=n-1;i++) {
        if(mon[i]>=r) {
            r=mon[i];
            j=i; } }
    k=mon[0];
    for(i=0;i<=n-1;i++) {
        if(mon[i]<=k) {
            r=mon[i];
            l=i; } }
    m=mon[l];
    mon[l]=mon[j];
    mon[j]=m;
    for(i=0;i<n;i++) {
        printf("%d ",mon[i]);
    }}
    printf("end");
    return 0; }