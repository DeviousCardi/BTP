#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
        return 0;
    else if(n==1)
        return 1;
    return(fib(n-2)+fib(n-1));p }
int main() {
    int n, t, a[21], i, temp;
	scanf("%d",&t);
	for(i=0;i<=20;i++)
	    a[i]=fib(i);
	while(t--) {
	    temp=0;
	    scanf("%d",&n);
	    for(i=0;i<21;i++) {
	        if(n==a[i])
	        temp++; }
	    if(temp)
	        printf("yes\n");
	    else
	        printf("no\n"); }
	return 0; }