#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int t,i,j;
	int k;
	scanf("%d\n",&t);
	for(i=0; i<t; i++) {
	    scanf("%d",&k);
	    for(j=0; j<=20; j++) {
	        if(fib(j)==k) {
	            printf("yes\n");
	            break; } }
	    for(p=0; p<=20; p++) {
	        if(fib(j)!=k) {
	            printf("no");
	            break; } } }
	return 0; }