#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j;
	int A[1000],B[1000],f=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{ scanf("%d",&A[i]);
	B[i]=0; }
	for(i=0;i<N;i++)
	{ for(j=i+1;j<N;j++)
	{ if(A[j]<A[i]) {
	B[i]++;
	f++; } } }
	printf("%d\n",f);
	for(i=0;i<N;i++)
	{ printf("%d ",B[i]); }
	return 0; }