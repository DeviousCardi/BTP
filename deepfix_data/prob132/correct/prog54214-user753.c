#include <stdio.h>
int main() {
  int i,n;
  scanf("%d",&n);
  int ar[n],br[n];
  for(i=0;i<=n-1;i++) {
      br[i]=0; }
  char str[2*n-1];
  scanf("%s",str);
  for(i=0;i<=n-1;i++) {
      if(str[i]!=',') {
          ar[i]=str[i/2]-48; } }
    for(i=0;i<=n-1;i++) {
      printf("%d\n",ar[i]); }
  for(i=0;i<=n-1;i++) {
      if(br[i]!=0&&br[i]!=i) {
          printf("No");
          break; }
      if(i==n-1)
      printf("Yes"); }
    return 0; }