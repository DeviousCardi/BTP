#include <stdio.h>
int main() {
   int i,d,n,arr[100];
   scanf("%d",&n);
   for(i=0;i<n;i++) {
      scanf("%d ",&arr[i]); }
    scanf("%d",&d);
    for(i=n-d;i<n;i++)
    printf("%d ",arr[i]);
    for(i=0;i<=n-1-d;i++)
    printf("%d ",arr[i]);
    return 0; }