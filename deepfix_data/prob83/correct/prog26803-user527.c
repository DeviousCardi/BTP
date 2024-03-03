#include <stdio.h>
int main() {
    int d,i,a[100],n;
    scanf("%d",&n);
    for(i=50;i<=n+50;i++)
        scanf("%d",&n);
    scanf("%d",&d);
    for(i=1;i<=d;i++) {
        a[50-i]=a[n+51-i]; }
    for(i=50-d;i<=n+50;i++)
        printf("%d ",a[i]);
    return 0; }