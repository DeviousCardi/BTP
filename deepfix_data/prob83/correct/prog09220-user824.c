#include <stdio.h>
int main() {
    int n,a[20],d;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    scanf("\n%d",&d);
    for(int i=n-d;i<n;i++)
    printf("%d ",a[i]);
    for(int i=0;i<n-d;i++)
    printf("%d ",a[i]);
    return 0; }