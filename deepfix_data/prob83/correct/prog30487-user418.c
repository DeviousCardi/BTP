#include <stdio.h>
int main() {
    int n,a[1000],d,i;
    scanf("%d",&n);
    for( i = 0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        if((i+d)<n)
        printf("%d ",a[i+d]);
        else printf("%d ",a[(i+d)%n]); }
    return 0; }