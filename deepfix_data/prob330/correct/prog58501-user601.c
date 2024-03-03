#include <stdio.h>
int main() {
  int n,i,j,count=0;
  scanf("%d",&n);
  int p[n];
  for(i=0;i<n;i++) {
    scanf("%d",&p[i]); }
  for(j=1;j<(n-1);j++) {
      if(p[j]>p[(j-1)]&&p[j]>p[(j+1)]) {
        count=count+1; } }
  printf("%d",count);
    return 0; }