#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,alice=0,bob=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    alice=alice+a[i];
	    bob=bob+a[n-1-i]; }
	printf("%d",alice);
	return 0; }