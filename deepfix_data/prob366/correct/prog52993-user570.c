#include <stdio.h>
int main() {
    int i,n,k,r;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&i); }
    scanf("%d",&k);
    int count=0;
    while(a[i]!=k)
    for(i=0;i<n;i++) {
        count=count+1;
        break; }
    int sum=0;
    while(a[i]!=k)
    for(i=count;i<2*n;i++) {
        sum=sum+1;
        break; }
    r=sum-count;
    printf("%d",r);
    return 0; }