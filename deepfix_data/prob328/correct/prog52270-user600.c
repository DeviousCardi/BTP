#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if (n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int i,k,t,j,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
        for(j=0;j<20;j++){
	         if(fib(j)==n)
	         printf("yes");
	         else printf("no"); } }
	return 0; }