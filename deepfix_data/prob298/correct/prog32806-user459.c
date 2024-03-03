#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned cat(int n) {
   if(n==0)
   return 1;
   unsigned sum=1;
   for(j=0;j<n;j++)
   sum=sum+(cat(j-1)*cat(n-j-1));
   return sum; }
int main() {
	for (i=0; i<10; i++) {
	    printf( "%u ", cat(i) ); }
	return 0; }