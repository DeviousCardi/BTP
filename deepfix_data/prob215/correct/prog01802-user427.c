#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n;
	scanf("%ld",&n);
	long int count=0;
	int i;
	for (i=1;i<n;i++) {
	    if (n%i==0) {
	        count=count+i; } }
	if (count==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }