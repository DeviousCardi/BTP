#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[2*n-1];
    for(i=0;i<2*n-1;i=i+2)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }