#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n<0)
        return -1;
    else if (n==0&&n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2); }
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i=i+1) {
	    scanf("%d",&k);
	    if(k==-1)
	        printf("no\n");
	    else {
	            for(j=0;j<20;j=j+1) {
	                if(fibonacci(j)==k)
	                    printf("yes\n");
	               else
	                printf("no\n"); } } }
	return 0; }