#include <stdio.h>
int main() {
    int a[100],i,n;
    scanf("%d %d %d",&a[1],&a[2],&n);
    for(i=3;i<=n;i++) {
        a[i]=a[i-1]+a[i-2]-2; }
    printf("%d",a[n]);
    return 0; }