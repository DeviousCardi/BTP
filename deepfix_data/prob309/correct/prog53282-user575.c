#include <stdio.h>
int main() {
  int n,m,i,t=0,j,k=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
     scanf("%d",&a[i]);
     printf("%d\n",a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(a[j]==a[i]) {
              t=t+1; } }
     printf("%d",t); }
    return 0; }