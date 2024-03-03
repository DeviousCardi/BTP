#include <stdio.h>
#include <stdlib.h>
int main() {
	long num,rev=0,sum,n;
	num=n;
	while(n>0)
	scanf("%ld",&num); {
	    sum=n%10;
	    rev=rev*10+sum;
        n=n/10; }
	printf("%ld",rev);
	if(rev==num) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }