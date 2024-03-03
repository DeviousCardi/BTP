#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count=0;
	scanf("%d\n",&n);
	int A[n];
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	    scanf("%d ",&A[i]);
	    if((A[i]>A[j])&&(i<j))
	    count=count+1; }
	printf("%d",count);
	return 0; }