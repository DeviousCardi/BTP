#include <stdio.h>
int main() {
  int i,n,j,p=1,count;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++)
  scanf("%d",&A[i]);
  for(i=0;i<n;i++)
  {count=0;
      for(j=0;j<n;j++) {
          if(A[i]==A[j]) {
              count++; } }
      if(count!=A[i])
      {p=0;
      printf("No");
      return 0; }
      else
      {p=1; } }
  printf("Yes");
    return 0; }