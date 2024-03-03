#include <stdio.h>
int main() {
  int i,j,n,count=0;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
      if(A[i]==A[j])
          count++; }
  if(count==A[i])
      printf("Yes"); }
    return 0; }