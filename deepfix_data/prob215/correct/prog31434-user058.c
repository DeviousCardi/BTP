#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n, i, sum;
	sum=0;
	scanf("%ld\n", &n);
	for(i=1;i<((n/2)+1);i++) {
	    if(n%i==0) {
	        printf("%d", i);
	        sum=sum+i; } }
	if(sum==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }