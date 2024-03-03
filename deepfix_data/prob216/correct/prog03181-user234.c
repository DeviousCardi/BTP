#include <stdio.h>
#include <stdlib.h>
int fib(int t) {
    if(t==0)
    return 0;
    else if (t==1)
    return 1;
    else
    return (fib(t-2)+fib(t-1)); }
int main() {
	int a[1000],n,i,r;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]); }
	for(i=0;i<n;i++) {
	    r=fib(a[i]);
	    printf("%d\n",r); }
	return 0; }