#include <stdio.h>
int main() {
    int n,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
          scanf("%d",a+i); }
    scanf("%d",&d);
    for(int j=0;j<d;j++) {
      int x=a[n-1];
      for(int i=n-1;i>0;i--) {
           a[i]=a[i-1]; }
      a[0]=x; }
      for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0; }