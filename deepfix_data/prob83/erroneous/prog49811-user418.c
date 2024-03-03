#include <stdio.h>
int main() {
    int n,a[1000],d;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    if((i+d)<n)
    printf("%d",a[i+d]);
    else printf("%d",a[(i+d)%n])
    return 0; }