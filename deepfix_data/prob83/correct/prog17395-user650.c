#include <stdio.h>
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int a[n+1000];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&d);
   for(i=0;i<n-d;i++)
   a[n+i]=a[i];
   for(i=(n-d);i<(2*n-d-1);i++)
   printf("%d",a[i]);
    return 0; }