#include <stdio.h>
int main() {
  int n,i=0,j,count=0;
  scanf("%d\n",&n);
  int A[n];
  for(i=0;i<(n);i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(A[i]==A[j])
          count=count+1; }
      printf("%d ",count);
      count=0; }
    return 0; }