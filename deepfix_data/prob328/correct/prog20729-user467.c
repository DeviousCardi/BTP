#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	int i,j;
	int k;
	scanf("%d",&t);
	for (j=1;j<=t;j++) {
	    int c=0;
	    scanf("%d",&k);
	    for(i=0;i<=20;i++) {
	    if(fib(i)==k) {
	        printf("yes\n");
	        c++;
	        break; } }
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