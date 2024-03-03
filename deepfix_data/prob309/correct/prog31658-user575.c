#include <stdio.h>
int main() {
  int n,m,i,t,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
     scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=1;j<n;j++) {
          if(a[j]==a[i]) {
              t=t+1; } }
      if(t==i)
        m=m+1; }
    return 0; }