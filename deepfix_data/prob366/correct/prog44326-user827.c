#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[2*n+2];
    for(i=1;i<=2*n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=2*n;i++)
        printf("%d",&a[i]);
    return 0; }