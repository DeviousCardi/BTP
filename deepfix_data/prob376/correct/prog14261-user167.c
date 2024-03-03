#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n) {
    if(n==1)
    return 1;
    else
    return n*fact(n-1); }
int catalen( int n) {
   if(n==0)
   return 1;
   else
   return fact(2*n)/fact(n+1)*fact(n)  ; }
int main() {
int i,k,t;
scanf("%d",&t);
  for(i=0; i<t; i++) {
     k=catalen(i);
      printf("%d\n",k); }
	return 0; }