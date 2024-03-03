#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	int c=0;
	int i,j;
	int k;
	scanf("%d",&t);
	scanf("%d",&k);
	for (j=1;j<=t;j++) {
	    for(i=0;i<=20;i++) {
	    if(k==fib(i)) {
	        printf("yes\n"); } }
	c++;
	break; }
	if(c==0) {
	    printf("no\n"); } }
	return 0; }
int fib(n) {
    if(n==0) {
        return 0; }
    if (n==1) {
        return 1; }
    else
    return fib(n-1)+fib(n-2); }