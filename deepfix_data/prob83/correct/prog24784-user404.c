#include <stdio.h>
int main() {
    int n,d,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=d;i<n;i++) {
        printf("%d ",a[i-1]);
        c=c+1; }
    printf("%d",a[n-1]);
    for(i=0;i<d;i++) {
      if(c<n)
    printf("%d ",a[i]);
    c=c+1; }
    return 0; }