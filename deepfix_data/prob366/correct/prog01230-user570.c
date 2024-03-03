#include <stdio.h>
int main() {
    int i,n,k,r;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&i); }
    scanf("%d",&k);
    int count=0;
    for(i=0;i<n;i++) {
        while(a[i]!=k)
        count=count+1; }
    int sum=0;
    for(i=count;i<2*n;i++) {
        while(a[i]!=k)
        sum=sum+1; }
    r=sum-count;
    printf("%d",r);
    return 0; }