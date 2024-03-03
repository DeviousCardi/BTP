#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{ if(n==1)
    return 0;
  else if(n==2||n==3)
    return 1;
else return fib(n-1)+fib(n-2); }
int main() {
	 int t,A[100],i;
	 scanf("%d",&t);
	 for(i=0;i<t;i++)
       { scanf("%d",&A[i]);
           printf("%d",fib(A[i])); }
	return 0; }