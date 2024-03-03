#include <stdio.h>
#include <stdlib.h>
int fib(int a){
if(a==1)
return 0;
if(a==2)
return 1;
return (fib(a-1)+fib(a-2)); }
int main() {
	int i,t,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	scanf("%d",&a);
	b=fib(a);
	printf("%d\n",b); }
	return 0; }