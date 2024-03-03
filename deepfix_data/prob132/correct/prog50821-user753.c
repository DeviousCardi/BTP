#include <stdio.h>
int main() {
  int i,n;
  scanf("%d",&n);
  int ar[n],br[n];
  for(i=0;i<=n-1;i++) {
      br[i]=0; }
  int ch;
  for(i=0;i<=n-1;i++) {
      ch=getchar();
      if(ch!=',') {
      ar[i]=ch-48;
      br[ar[i]]++; } }
    for(i=0;i<=n-1;i++) {
      printf("%d",ar[i]); }
  for(i=0;i<=n-1;i++) {
      if(br[i]!=0&&br[i]!=i) {
          printf("No");
          break; }
      if(i==n-1)
      printf("Yes"); }
    return 0; }