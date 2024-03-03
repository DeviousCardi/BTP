#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
     if(n==0) {
         return 1; }
     else {
         return (n*fac(n-1)); } }
    int catalan(int n) {
      int c;
      c=(fac(2*n)/fac(n+1)*fac(n)); {
          return c; } }
int main() {
  int i,t,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
     int sum=0;
      scanf("%d",&t);
      if(t==0)
      sum=0;
      if(t>0) {
      for(j=0;j<=t;j++) {
         sum=sum+catalan(j); } }
      printf("%d\n",sum); }
	return 0; }