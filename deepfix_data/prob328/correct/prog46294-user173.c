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
	int temp,i,j,t,k,flag=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{   temp=0;
	    scanf("%d\n",&k);
	    for(j=0;temp<=k;j++,temp=fib(j))
	       if(k==temp) {
	            flag=1;
	            break; }
	    if(flag==0)
	        printf("%d %d no\n",k,temp);
	    else
	        printf("%d %d yes\n",k,temp); }
	return 0; }