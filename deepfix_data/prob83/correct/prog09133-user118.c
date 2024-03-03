#include <stdio.h>
int func (int a,int b,int n) {
    int c;
    c=a+b;
    c=c%n;
    return c; }
int main() {
    int n,a[100],k,i;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<=n-1;i++)
    printf("%d",&a[i,k,n]);
    return 0; }