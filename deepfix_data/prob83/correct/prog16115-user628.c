#include <stdio.h>
int main() {
    int n;
    int a[100];
    int i;
    int c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("\n%d",&c);
    for (i=n-c;i<n;i++)
    printf("%d",a[i]);
    for (i=0;i<n-c;i++)
    printf("%d",a[i]);
    return 0; }