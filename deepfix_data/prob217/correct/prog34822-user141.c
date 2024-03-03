#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	scanf("%d",&N);
	float A[N];
	int i,j,k;
	for (i=0;i<N;i++) {
	    scanf("%f",&A[i]); }
	float S;
	scanf("%f",&S);
	for (j=0;j<N-1;j++) {
	    for (k=j+1;k<N;k++) {
	        if ((A[j]+A[k])==S) printf("(%d,%d)\n",j,k); } }
	return 0; }