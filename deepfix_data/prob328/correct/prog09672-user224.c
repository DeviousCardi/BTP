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
    int i,t,j,k;
    scanf("%d",&t);
	for(i=0;i<t;i++)
{	scanf("%d",&k);
	if(k>20)
	return 0;
	for(j=1;j<=40;j++) {
	 if(k==Fib(j)){
	printf("yes\n");break;} }
	if(j==41)
	printf("no\n"); }
	return 0; }