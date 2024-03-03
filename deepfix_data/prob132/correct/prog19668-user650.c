#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<2*n-1;i=i+2)
    scanf("%d",&a[i]);
    for(i=0;i<2*n-1;i=i+2)
    printf("%d",a[i]);
    return 0; }