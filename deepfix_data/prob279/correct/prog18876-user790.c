#include <stdio.h>
int main() {
  int count,i,j,n,num1;
  scanf("%d",&n);
  int num[n],nat[n];
  for(i=0;i<n;i++)
  scanf("%d",&num[i]);
  num1=1;
  for(i=0;i<n;i++) {
      nat[i]=num1;
      num1++; }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if((num[i]==num[j])&&(i!=j))
          printf("%d ",num[i]); } }
    return 0; }