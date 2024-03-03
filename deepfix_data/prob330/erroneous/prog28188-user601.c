#include <stdio.h>
int main() {
  int n,i,count=0;
  scanf("%d",&n);
  int p[n];
  for(i=0;i<n;i==) {
    scanf("%d",&p[i]); }
  for(i=1;i<(n-2);i++) {
      if(p[i]>p[(i-1)&&p[i]>p[(i+1)]) {
        count=count+1; } }
  printf("%d",count);
    return 0; }