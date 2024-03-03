#include <stdio.h>
int main() {
  int n,i,j,k,p;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i=i+1) {
      scanf("%d",&a[i]); }
  for(j=0;j<n;j=j+1) {
      p=0;
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              p=p+1; } } }
    return 0; }