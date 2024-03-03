#include <stdio.h>
int main() {
  int i,n,j,k;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i=i+1) {
      scanf("%d",&a[i]); }
  for(j=0;j<n;j=j+1) {
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              printf("%d",a[j]);
              break; } } }
    return 0; }