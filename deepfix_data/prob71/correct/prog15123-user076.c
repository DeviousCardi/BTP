#include <stdio.h>
int main() {
   int i,n,a[100000],p;
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       scanf("%d ",&a[i]); }
   for(i=0;i<n-1;i++) {
      if(a[i]>a[i+1]) {
          p=a[i];
          a[i]=a[i+1];
          a[i+1]=p; } }
   for(i=0;i<n;i++) {
       printf("%d ",a[i]); }
    return 0; }