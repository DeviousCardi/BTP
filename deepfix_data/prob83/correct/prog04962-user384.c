#include <stdio.h>
int main() {
    int n,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    scanf("%d",&d);
    int x;
    for(int i=1;i<=d;i++) {
         x=a[n-1];
         for(int j=n-1;j>0;j=j-1)
              a[j]=a[j-1];
         a[0]=x; }
    for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0; }