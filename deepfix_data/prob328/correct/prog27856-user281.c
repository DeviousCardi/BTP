#include <stdio.h>
#include <stdlib.h>
int main() {
	int t,i,number,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&number);
	    for(j=0;j<=20;j++) {
	        if(number==fib(j)) {
	            printf("yes\n");
	            break; } }
	    if(j==21)
	    printf("no\n"); }
return 0; }
int fib (int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }