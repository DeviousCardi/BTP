#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        getchar(); }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }