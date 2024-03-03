#include <stdio.h>
#include <stdlib.h>
int fib(intn) {
    if(n==0)
    return -1;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2); }
int main() {
    int t,k,i;
    scanf("%d",&t);
        for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    if(k<==0)
	    printf("cannot print");
	    else
	    printf("fib(n)"); }
	return 0; }