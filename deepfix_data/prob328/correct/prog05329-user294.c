#include <stdio.h>
#include <stdlib.h>
 int fib(int n) {
  if(n==0)
  return 0;
  else if(n==1 || n==2)
  return 1;
  else
  return (fib(n-1)+fib(n-2)); }
int main() {
	int  n,i=0,j,S[20];
	scanf("%d\n",&n);
	scanf("%d\n",&S[j]);
	for(j=0; j<n; j++){
	while(fib(i)<n){
	    i++;
	} if(fib(i)==n)
	     printf("yes\n");
	 	else
	 	 printf("no\n"); }
	return 0; }