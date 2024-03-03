#include <stdio.h>
#include <stdlib.h>
int fib(int a){
if(a==0)
return 0;
if(a==1)
return 1;
return (fib(a-1)+fib(a-2)); }
int main() {
	int a,b;
	scanf("%d",&a);
	b=fib(a);
	printf("%d",b);
	return 0; }