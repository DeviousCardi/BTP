#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    int a=0,b=1,c;
    if(n==1)
    return a;
    if(n==2)
    return b;
    if(n>2)
    c=return fib(n-1)+ return fib(n-2);
    return c; }
int main() {
    int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    printf("%d",fib(n)); }
	return 0; }