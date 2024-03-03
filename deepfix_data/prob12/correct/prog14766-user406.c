#include <stdio.h>
int main() {
    int n,x,y,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++) {
    scanf("%d",&a[i]); }
    for(i=0;i<=n-1;i++) {
    scanf("%d",&b[i]); }
    for(i=0;i<=n-1;i++) {
        if(n==a[i])
        x=i; }
    for(i=0;i<=n-1;i++) {
        if(n==b[i])
        y=i+n; }
    printf("%d",x-y);
    return 0; }