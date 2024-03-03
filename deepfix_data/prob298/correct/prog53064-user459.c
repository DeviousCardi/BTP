#include <stdio.h>
#include <stdlib.h>
int i,j;
int cat(int n) {
   if(n==0)
   return 1;
   else
   return ( (4*n-2) / (n-1) ) * cat(n-1); }
int main() {
	for (i=0; i<10; i++) {
	    printf( "%d ", cat(i) ); }
	return 0; }