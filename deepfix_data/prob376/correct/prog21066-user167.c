#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n) {
    fact(1)==1;
    return n*fact(n-1); }
int catalen( int n) {
   if(n==0)
   return 1;
   else
   return fact(2*n)/fact(n+1)*fact(n)  ; }
int main() {
int i,k,t,m;
scanf("%d",&t);
  for(i=0; i<t; i++) {
     scanf("%d",&m);
      printf("%d\n",m); }
	return 0; }