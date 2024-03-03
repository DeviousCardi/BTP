#include <stdio.h>
#include <stdlib.h>
int fib(int k) {
    if(k==0)
    return 0;
    else if (k==1)
    return 1;
    else {
        int i,n=0;
            n=fib(k-1)+fib(k);
            return n; } }
int main() {
	int no,t,i,out;
	scanf("%d",&no);
	for(i=0;i<no;i++) {
	    scanf("%d",&t);
	    out=fib(t);
	    printf("%d\n",out); }
	return 0; }