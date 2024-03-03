#include <stdio.h>
int main() {
  int n,i=0,j,count=0,flag=0;
  scanf("%d\n",&n);
  int A[n];
  for(i=0;i<(n);i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++)
  {flag=0;
      for(j=0;j<n;j++) {
          if(A[i]==A[j])
          count=count+1; }
      if(A[i]!=count) {
          printf("No");
          break; }
      else {
          flag=1; }
      count=0; }
  if(flag==1)
  printf("Yes");
    return 0; }