#include <stdio.h>
int main() {
  int n,i,j,count=0;
  scanf("%d\n",&n);
  int A[n],b[n];
  for(i=0;i<(n);i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++) {
      for(j=i;j<n;j++) {
      if(A[i]==A[j]) {
          count=count+1;
          A[j]=0; } }
      b[i]=count;
      count=0; }
  for(i=0;i<(n);i++) {
      printf("%d ",b[i]); }
    return 0; }