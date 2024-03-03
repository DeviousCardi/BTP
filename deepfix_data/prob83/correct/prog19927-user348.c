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
        if((n-d+j)>=n) {
            s[n-d+j]=s[j-d]; }
      p[j]=s[n-d+j];
      printf("%d ",p[j]); }
    return 0; }