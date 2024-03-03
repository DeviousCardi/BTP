#include <stdio.h>
int main() {
    int i,n,k,j,r;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&k);
    int count=0;
    while(a[i]!=k)
    for(i=0;i<n;i++) {
        count=count+1; }
    for(j=count;j<2*n;j++) {
        scanf("%d",&a[j]);
        if(a[j]==k);
        r=j;
        break; }
    r=j;
    printf("%d",r);
    return 0; }