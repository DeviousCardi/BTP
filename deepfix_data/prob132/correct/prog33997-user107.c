#include <stdio.h>
int main() {
  int n,i=0,j,count=0;
  scanf("%d\n",&n);
  int A[n],b[n];
  for(i=0;i<(n);i++) {
      scanf("%d,",&A[i]); }
  while(i<n) {
      for(j=i+1;j<n;j++) {
      if(A[i]==A[j]) {
          count=count+1; } }
      b[i]=count+1;
      i=i+count;
      count=0; }
  for(i=0;i<(n);i++) {
      printf("%d ",b[i]); }
    return 0; }