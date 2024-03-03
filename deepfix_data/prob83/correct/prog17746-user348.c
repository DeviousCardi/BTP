#include <stdio.h>
int main() {
  int n,d,i,j,a;
  scanf("%d",&n);
  int s[n];
  int p[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a);
      s[i]=a; }
   scanf("%d",&d);
  for(j=0;j<n;j++) {
      p[j]=s[d+j+1];
      printf("%d",p[j]); }
    return 0; }