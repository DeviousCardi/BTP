#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int k;
	scanf("%d",&k);
	for(i=0;i<=20;i++) {
	    if(fib(i)==k) {
	        printf("\nyes"); }
	    else {
	        printf("\nno"); } }
	return 0; }
int fib(n) {
    if(n==0) {
        return 0; }
    if (n==1) {
        return 1; }
    else
    return fib(n-1)+fib(n-2); }