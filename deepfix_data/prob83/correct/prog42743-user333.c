#include <stdio.h>
int main() {
    int n,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
          scanf("%d",a+i); }
    scanf("%d",&d); {
      int x=a[n-1];
      for(int i=n-1;i>0;i--) {
           a[i]=a[(i-d)%n]; }
      a[d-1]=x; }
      for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0; }