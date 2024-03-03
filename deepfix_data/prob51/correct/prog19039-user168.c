#include <stdio.h>
int main() {
    int n,k,a[10000000];
    int i,j;
    int temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }