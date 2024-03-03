#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,N,A[1000],sum=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++) {
	    scanf("%d",&A[i]); }
	for(i=2;i<=N;i++) {
	    if(A[i]>A[i-1]) {
	       sum=sum+1 ; } }
	printf("%d",sum);
	return 0; }