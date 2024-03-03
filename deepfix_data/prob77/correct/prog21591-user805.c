#include <stdio.h>
int main() {
    int n,i,r,j,k,l;
    scanf("%d",&n);
    int mon[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&mon[i]); }
    for(i=1;i<=n-1;i++)
    {r=mon[0];
        if(mon[i]>r) {
            r=mon[i];
            j=i; }
        k=mon[0];
        if(mon[i]<k) {
            r=mon[i];
            l=i; } }
    printf("end");
    return 0; }