#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int catalen( int n) {
   if(n==0)
   return 1;
   else
   return ((2*(2*n-1))/n+1)*catalen(n-1); }
int main() {
int i,k,t;
scanf("%d",&t);
int testcase[t];
  for(i=0; i<t; i++) {
      printf("%d\n",catalen(i)); }
	return 0; }