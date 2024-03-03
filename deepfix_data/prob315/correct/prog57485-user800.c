#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int A[n];
	int B[n];
	int i,j;
	int sum=0;
	for(i=0;i<n;i++)
	    B[i]=0;
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	    for(j=i+1;j<n;j++) {
	        if(A[i]>A[j])
	        B[i]++; }
	for(i=0;i<n;i++)
	    sum+=B[i];
	printf("%d\n",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",B[i]); }
	return 0; }