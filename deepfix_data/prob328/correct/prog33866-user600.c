#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if (n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int i,t,j,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
        for(j=0;j<20;j++){
	         if(fib(j)==n){
	         printf("yes");
	         break; } }
	        if(j==20)
	    printf("no");
	    printf("\n"); }
	return 0; }