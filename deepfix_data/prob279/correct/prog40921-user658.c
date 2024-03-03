#include <stdio.h>
int main() {
  int A[1000],B[1000],i,n,r,m;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&A[i]); }
  for(i=0;i<n;i++) {
      B[i]=0; }
  for(i=0;i<n;i++) {
      B[A[i]-1]++; }
  for(i=0;i<n;i++) {
      if(B[i]==2)
      r=i;
      if(B[i]==0)
      m=i; }
  printf("%d\n",r);
  printf("%d",m);
    return 0; }