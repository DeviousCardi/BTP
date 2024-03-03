#include <stdio.h>
int main() {
    int a[100],i,n,d;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        a[i+d]=a[i];
        printf("%d ",a[i+d]);
        i++; }
    return 0; }