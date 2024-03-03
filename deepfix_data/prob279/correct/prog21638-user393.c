#include <stdio.h>
int main() {
  int n,i,j;
  int a[10000];
  scanf("%d",&n);
  for (i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
         if(i!=j&&a[i]==a[j])
         printf("%d",i);
         if(a[i-1]+1!=a[i])
         printf("%d",a[i]); } }
    return 0; }