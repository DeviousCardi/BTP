#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count=0,i,j;
	scanf("%d\n",&n);
	int A[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]);
	    count++; }
	j=count-1;
	while(j>=0) {
	    if(A[n-j-1]==A[j]) {
	        continue; }
	    else
	    printf("No\n"); }
	printf("Yes\n");
	return 0; }