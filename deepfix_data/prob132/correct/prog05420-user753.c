#include <stdio.h>
int main() {
  int c=0,i,n;
  scanf("%d",&n);
  int ar[n],br[n];
  for(i=0;i<=n-1;i++) {
      br[i]=0; }
  for(i=0;i<=n-1;i++) {
      scanf("%d",&ar[i]);
      br[ar[i]]++; }
  for(i=0;i<=n-1;i++) {
      if(br[i]!=0&&br[i]!=i) {
          printf("No");
          break; }
      if(i==n-1)
      printf("Yes"); }
    return 0; }