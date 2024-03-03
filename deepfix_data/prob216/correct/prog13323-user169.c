#include <stdio.h>
#include <stdlib.h>
int fib(int k) {
    if(k==0)
    return 0;
    else if (k==1 || k==2)
    return 0;
    else {
        int i,n=0;
    return fib(k-1)+fib(k-2); } }
int main() {
	int no,t,i,out;
	scanf("%d",&no);
	for(i=0;i<no;i++) {
	    scanf("%d",&t);
	    out=fib(t);
	    printf("%d\n",out); }
	return 0; }