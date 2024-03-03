#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	int i;
	int k;
	scanf("%d",&t);
	scanf("%d",&k);
	for(i=0;i<=20;i++) {
	    if(fib(i)==k) {
	        printf("yes\n"); }
	    else {
	        printf("no\n"); } }
	return 0; }
int fib(n) {
    if(n==0) {
        return 0; }
    if (n==1) {
        return 1; }
    else
    return fib(n-1)+fib(n-2); }