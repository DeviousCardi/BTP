#include <stdio.h>
#include <stdlib.h>
int Fib(int x)
{ if(x==1)
 return 0;
 else if(x==2)
 return 1;
 else
 return Fib(x-1)+Fib(x-2); }
int main() {
    int i,t,n=1,k;
    scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k);
	if(k>20)
	return 0;
	while(n<20)
{	if(k==Fib(n))
	printf("yes\n");
	else
	printf("no\n");
	n++; }
	return 0; }