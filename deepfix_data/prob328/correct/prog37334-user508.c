#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if((n==0)||(n==1)) return n;
    return fib(n-1)+fib(n-2); }
int main() {
	int n,i,j,c=0,b;
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	   scanf("%d",&b);
	   c=0;
     for(i=0;i<20;i++)
	 if(b==fib(i)){printf("yes\n");c=1;break;};
	   if(c==0)printf("no\n"); }
	return 0; }