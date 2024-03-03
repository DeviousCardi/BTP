#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
        if(n==0)
            return 0;
        else if (n==1)
            return 1;
        else return(fib(n-1)+fib(n-2)); }
int main() {
	int n,i,j,p=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for (j=0;j<n;j++) {
    for(i=0;i<20;i++) {
	       if (a[j]==fib(i)) {
	        p=1;
	        break; } }
	if(p==1)
	    printf("yes\n");
	else printf("no\n"); }
	return 0; }