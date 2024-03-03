#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int i,t,j,k,flage=0;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    for(j=0;j<20;j++) {
	        if(k==fib(j)) {
	            printf("yes\n");
	            flage=1;
	            break; } }
	    if(flage==0)
	        printf("no\n");
	     flage=0; }
	return 0; }