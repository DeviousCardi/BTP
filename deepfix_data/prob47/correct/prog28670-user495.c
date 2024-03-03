#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else {
        return ((2*n-1)/(n+1))*cat(n-1)*2; } }
int main() {
  int n,i,sum,t,j;
  scanf("%d",&t);
  for(i=1;i<=t;i++) {
      sum=0;
      scanf("%d",&n);
      for(j=0;j<n;j++) {
          sum=sum+cat(i); }
      printf("%d\n",sum); }
	return 0; }