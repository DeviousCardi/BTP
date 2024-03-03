#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned sum;
unsigned cat(int n) {
   if(n==0)
   return 1;
   else {
       for(j=0;j<n;j++)
       sum=sum+(cat(j-1)*cat(n-j-1));
       return sum; } }
int main() {
	for (i=0; i<10; i++) {
	    sum=0;
	    printf( "%u ", cat(i) ); }
	return 0; }