#include <stdio.h>
int main() {
  int i,n;
  scanf("%d",&n);
  int ar[n],br[n];
  for(i=0;i<=n-1;i++) {
      br[i]=0; }
  char str[2*n-1];
  scanf("%s",str);
  for(i=0;i<=2*n-2;i++) {
      if(str[i]!=',') {
          ar[i/2]=str[i]-48; } }
  for(i=0;i<=n-1;i++) {
      br[ar[i]]++;
  }=0;i<=n-1;i++) {
      if(br[i]!=0&&br[i]!=i) {
          printf("No");
          break; }
      if(i==n-1)
      printf("Yes"); }
    return 0; }