#include <stdio.h>
#include <stdlib.h>
int fibo(int i) {
 if(i==1)
   return 1;
 else if(i==0)
   return 0;
  else
   return fibo(i-1)+fibo(i-2); }
int main() {
	int j,n,k,t,q=0;
	scanf("%d\n",&t);
	for(k=0;k<t;k++) {
	    scanf("%d\n",&n);
	    for(j=0;j<20;j++) {
	       if(n==fibo(j)) {
	      	q=1;
	      	printf("yes");
	   	    break; } }
	       if(q!=1)
	       printf("no\n"); }
	return 0; }