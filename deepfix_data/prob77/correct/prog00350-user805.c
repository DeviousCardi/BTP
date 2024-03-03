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
            j=i;
        }printf("%d",mon[j]); }
    for(i=0;i<=n-1;i++) {
        k=mon[0];
        if(mon[i]<=k) {
            r=mon[i];
            l=i;
        }printf("%d",mon[l]); }
    m=mon[l];
    mon[l]=mon[j];
    mon[j]=m;
    for(i=0;i<n;i++) {
        printf("%d ",mon[i]); }
    printf("end");
    return 0; }