#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,A[10000],i,sum,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	scanf("\n%d",&sum);
	for(j=0;j<(n);j++) {
	    for(k=0;k<n;k++) {
	        if(sum==(A[j]+A[k]) && j != k)
	            printf("(%d,%d)\n",A[j],A[k]); } }
	return 0; }