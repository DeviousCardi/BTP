#include <stdio.h>
int main() {
  int A[100000];
  int b[100000]={0};
  int n,i,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d,",&A[i]); }
  for(i=0;i<n;i++) {
      b[A[i]-1]++; }
  for(i=0;i<n;i++) {
      if(b[A[i]-1]!=A[i]) {
          c++;
          break; } }
  if(c==1)
  printf("No");
  else
  printf("Yes");
  return 0; }