#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2); }
int main() {
	int temp=0,i,j,t,k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k)
	    for(j=0;temp<k;j++,temp=fib(j))
	        if(k==temp)
	            break;
	    if(temp>k)
	        printf("no\n");
	    else
	        printf("yes\n"); }
	return 0; }