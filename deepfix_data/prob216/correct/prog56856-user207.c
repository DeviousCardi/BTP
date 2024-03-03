#include <stdio.h>
#include <stdlib.h>
	 int fib(int n){
	     if(n==0)
	     return 0;
	     else if(n==1)
	     return 1;
	   else
	   return fib(n-1)+fib(n-2); }
int main() {
   int i,n,a[n],j;
   scanf("%d\n",&n);
  fib(n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
	a[i]=fib(i);
	printf("%d\n",a[i]);}
	return 0; }