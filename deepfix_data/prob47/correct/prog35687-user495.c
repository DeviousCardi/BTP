#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
     if(n<=1) {
         return 1; }
     else
     n=n*fac(n-1); {
         return n; } }
    int catalan(int n) {
      int c;
      c=(fac(2*n)/fac(n+1)*fac(n)); {
          return c; } }
int main() {
  int i,t,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
     int sum=0;
      scanf("%d",&t);
      t--;
      for(j=0;j<n;j++)
      sum=sum+catalan(j);
      printf("%d\n",sum); }
	return 0; }