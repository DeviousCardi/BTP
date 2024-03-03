#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if((n==0)||(n==1)) return n;
    return fib(n-1)+fib(n-2); }
int main() {
	int n,i,j,c=0;
	scanf("%d",&n);
	int f[20];
	for(i=0;i<20;i++)
	f[i]=fib(i);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{c=0;
	for(i=0;i<20;i++)
	if(a[j]==fib(i)){printf("yes\n");c=1;break;};
	if(c==0)printf("no\n");}
	return 0; }