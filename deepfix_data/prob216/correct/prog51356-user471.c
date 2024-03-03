#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if (n==1)
    return 0;
    else
    if (n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int n,ar[20],i,j;
	scanf ("%d\n",&n);
	for (i=0;i<n;i++){
	    scanf ("%d\n",&ar[i]); }
		for (i=0;i<n;i++){
		  printf ("%d\n",fib(ar[i])); }
	return 0; }