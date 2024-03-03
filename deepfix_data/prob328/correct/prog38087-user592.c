#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if (n==1)
    return 0;
    else if (n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
	int i,n,j;
	int temp=0;
	int A[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf ("%d\n",&A[i]); }
	for (i=0;i<n;i++) {
	    for (j=1;j<=20;j++) {
	        if (A[i]==fib(j))
	        temp=1; }
	    if (temp==1)
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }