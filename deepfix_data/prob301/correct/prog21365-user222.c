#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,pos=0;
  scanf("%d",&n);
  int ar[n];
  for(i=0;i<n;i++) {
      scanf("%d",&ar[i]); }
  if(n==1) {
      printf("%d",ar[0]); }
  else {
  for(i=0;i<n;i++) {
      if(ar[i]==ar[i+1])
      {pos=i; } }
  printf("%d",ar[pos-1]); }
	return 0; }