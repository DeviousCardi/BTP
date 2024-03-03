#include <stdio.h>
int main() {
    int i,n,k,r,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&k);
    int count=0;
    while(a[i]!=k)
    for(i=0;i<n;i++) {
        count=count+1; }
    int sum=0;
    for(j=count;j<2*n;j++) {
        while(a[j]!=k)
        sum=sum+1; }
    r=sum;
    printf("%d",r);
    return 0; }