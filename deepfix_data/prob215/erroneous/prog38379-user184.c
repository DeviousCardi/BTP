#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum=0;
	for(i=1; i<n; i++) {
	    if(n%i==0) {
	        sum+=i; } }
	if(sum==n)
	printf("YES\n");
	else
	printf("NO\n");
	return 0; }