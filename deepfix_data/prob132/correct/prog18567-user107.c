#include <stdio.h>
int main() {
  int n,i;
  scanf("%d\n",&n);
  int A[n];
  for(i=0;i<(n);i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<(n);i++) {
      printf("%d ",A[i]); }
    return 0; }