#include <stdio.h>
int main() {
    int n,d,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=d-1;i<n;i++) {
        printf("%d",a[i-1]); }
    for(i=0;i<d;i++)
    printf("%d",a[i]);
    return 0; }