#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    sum=sum+a[i+1]; }
	printf("%d",sum);
	return 0; }