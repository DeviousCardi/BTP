#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return(fib(n-1)+fib(n-2)); }
int main() {
	int i,j,k,l;
	scanf("%d",&i);
	for(j=0;j<i;j++) {
	    scanf("%d",&k)         ;
	    for(l=0;l<20;l++) {
	        if(k<0) {
	            printf("no\n");
	            break; }
	        if(k==fib(l)) {
	            printf("yes\n");
	            break; }
	        if(k>fib(l))
	        continue;
	        else {
	            printf("no\n");
	            break; } } }
	return 0; }