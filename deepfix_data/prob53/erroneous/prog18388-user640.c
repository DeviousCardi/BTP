#include<stdio.h>
int sum (int n, int a[]) {
    int m=a[n];
    if (n==0)
    return m;
    if (n>0) {
        m=m-a[n-1];
        return sum (n-1,a); } }
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    printf("%d",return(n,a[]));
    return 0; }