#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count=0,p=0;
	scanf("%d\n",&n);
	int A[n];
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	    scanf("%d ",&A[i]);
	    if((A[i]>A[j])&&(i<j))
	    p=p+1;
	    count=count+1;
	    printf("%d ",p); }
	printf("%d",count);
	return 0; }