#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    sum=sum+a[i];
	    printf("%d",sum); }
	return 0; }