#include <stdio.h>
#include <stdlib.h>
 long fib(long n) {
  if(n<=0)
  return 0;
   if(n==1 || n==2) return 1;
  return (fib(n-1)+fib(n-2)); }
int main() {
	long n,i,j,k,s[n],t[20];
	scanf("%ld\n",&n);
	for(i=0; i<n; i++)
	t[i]=fib(i);
	for(i=0; i<n; i++){
	scanf("%ld",&s[i]);
	j=fib(s[i]);
	for(k=0;k<20;k++)
	    if(j<=t[k])
	    break;
	 	 if(j==t[k])
	     printf("yes\n");
	 	 else
	 	 printf("no\n"); }
	return 0; }