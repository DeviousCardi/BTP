#include <stdio.h>
int main() {
    int i,n,k,r;
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
    for(i=count;i<2*n;i++) {
        if(a[i]==k)
        break; }
    r=i;
    printf("%d",r);
    return 0; }