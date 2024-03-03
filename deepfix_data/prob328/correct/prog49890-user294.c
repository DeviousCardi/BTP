#include <stdio.h>
#include <stdlib.h>
 int fib(int n) {
  if(n<=0)
  return 0;
  else if(n==1 || n==2)
  return 1;
  return (fib(n-1)+fib(n-2)); }
int main() {
	int n,i,j,s[n];
	scanf("%d\n",&n);
	for(i=0; i<n; i++){
	scanf("%d",&s[i]);
	j=fib(s[i]);
	    if(j==n)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }