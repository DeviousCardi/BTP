#include <stdio.h>
#include <stdlib.h>
 int fib(int n) {
  if(n<=0)
  return 0;
   if(n==1 || n==2) return 1;
  return (fib(n-1)+fib(n-2)); }
int main() {
	int  n,i,j,k,s[100],t[20];
	scanf("%d\n",&n);
	for(i=0; i<n; i++)
	t[i]=fib(i);
	for(i=0; i<n; i++){
	scanf("%d",&s[i]);
	j=fib(s[i]);
	for(k=0;k<20;k++)
	    if(j<=t[k])
       {  break;
	 	 k=0;}
	 	 if(j==t[k])
	     printf("yes\n");
	 	 else
	 	 printf("no\n"); }
	return 0; }