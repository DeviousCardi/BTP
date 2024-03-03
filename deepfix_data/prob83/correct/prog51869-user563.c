#include <stdio.h>
int main() {
    int n,d,i;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    scanf ("%d",&d);
    for (i=n-d;i<n;i++)
        printf("%d ",a[i]);
    for (i=0;i<n-d;i++)
    printf("%d ",a[i]);
    return 0; }