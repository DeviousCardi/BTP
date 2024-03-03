#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",n);
    int a[n+1];
    for(i=1;i<n+1;i++)
    scanf("%d",&a[i]);
    int d;
    scanf("%d",&d);
    while(d--) {
        a[0]=a[n];
        for(i=n;i>=0;i++)
        a[i]=a[i-1]; }
    for(i=1;i<n+1;i++)
    printf("%d",a[i]);
    return 0; }