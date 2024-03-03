#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
 if(n<=1)
 return n;
 else
 return fib(n-1)+fib(n-2); }
int main() {
int t,i,num;
scanf("%d",&t);
for(i=0;i<t;i++) {
 scanf("%d",&num);
 if(num==fib(t))
 printf("yes");
 else
 printf("no"); }
	return 0; }