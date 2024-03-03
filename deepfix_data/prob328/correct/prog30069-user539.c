#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
       if(n<=1)
       {return n;}
       else
        return (fib(n-1)+fib(n-2)); }
int main() {
	int n,k[20],i,j,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=0;i<n;i++) {
	      for(j=0;j<20;j++)
	       {flag =0;
	           if(fib(j)==k[i]) {
	                 flag=1;break; } }
	  if(flag==1)
	   printf("yes\n");
	   else printf("no\n"); }
	return 0; }