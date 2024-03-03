#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,rev=0,sum=0;
	scanf("%ld",&n);
	while(n>0) {
	    sum=n%10;
	    sum=sum*10+sum;
	    n=n/10; }
	if(n==sum) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }