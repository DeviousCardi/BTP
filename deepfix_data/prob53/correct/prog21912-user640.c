#include<stdio.h>
int sum (int n, int a[]) {
    int m=a[n];
    if (n==0)
    return m;
    else{
    m=m+a[n];return sum (n-1,a);}
    return m; }
int main() {
    int i,c,n;
    scanf("%d",&n);
    int a[n];
    for (i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    c= sum(n,a);
    printf("%d",c);
    return 0; }