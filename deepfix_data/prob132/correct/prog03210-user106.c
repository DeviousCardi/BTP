#include <stdio.h>
int main() {
  int i,j,n,count=0,flag=0;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++) {
      for(j=i;j<n;j++) {
      if(A[i]==A[j])
          count++; }
  if(count==A[i])
  flag=1; }
  if(flag==1)
  printf("Yes");
      else if(flag!=0)
      printf("No");
    return 0; }