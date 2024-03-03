#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int A[50],i,t,n;
	int fib(n);
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	  scanf("%d",&A[i]);
	  for(n=0;n<20;n++) {
	      if (A[i]==fib(n)) printf("yes\n");
	      continue; } }
	return 0; }