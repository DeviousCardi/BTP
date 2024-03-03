#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j,S,f=0;
	int A[10000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	scanf("%d",&S);
	for(i=0;i<N-1;i++) {
	    for(j=i+1;j<N;j++) {
	        if((A[i]+A[j])==S)
	        {   f=1;
	            printf("(%d,%d)\n",A[i],A[j]); } } }
	return 0; }