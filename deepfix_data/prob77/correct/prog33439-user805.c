#include <stdio.h>
int main() {
    int n,i,r,j,k,l,m;
    scanf("%d",&n);
    int mon[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&mon[i]); }
    for(i=1;i<=n-1;i++)
    {r=mon[0];
        if(mon[i]>=r) {
            r=mon[i];
            j=i; } }
    for(i=0;i<=n-1;i++) {
        k=mon[0];
        if(mon[i]<=k) {
            r=mon[i];
            l=i; } }
    m=mon[l];
    mon[l]=mon[j];
    mon[j]=m;
    for(i=0;i<n;i++) {
        printf("%d ",mon[i]); }
    if(n=2) {
    printf("%d %d ",mon[1],mon[0]); }
    printf("end");
    return 0; }