#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum,i;
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++) {
	    if(n%i==0) {
	        sum+=i; } }
	if(n==sum) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }