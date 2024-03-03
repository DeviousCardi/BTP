#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count=0;
	scanf("%d\n",&n);
	int A[1000],B[1000];
	for(i=0;i<n;i++)
	  scanf("%d ",&A[i]);
	for( i=0;i<=n-1;i++) {
	B[i]=0;
	for( j=i+1;j<=n-1;j++)
	if(A[i]>A[j])
    B[i]++;
	count+=B[i]; }
	printf("%d\n",count);
	for(i=0;i<=n-1;i++)
	printf("%d ",B[i]); }