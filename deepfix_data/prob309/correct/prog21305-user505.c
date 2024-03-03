#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
    a[j]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&k);
        a[k]=a[k-1]+1; }
    printf("%d",a[k]);
    return 0; }