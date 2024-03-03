#include <stdio.h>
#include <stdlib.h>
int main() {
	long int A[10000];
	long int  N,S;
	scanf("%ld",&N);
	long int i;
	for(i=0;i<N;i++){
	    scanf("%ld",&A[i]); }
	scanf("\n%ld",&S);
	long int j=0,l;
	while(j<N){
	    for(l=0;l<N;l++){
	    if(A[j]<A[l]){
	    if(A[j]+A[l]==S)
	        printf("(%ld,%ld)\n",A[j],A[l]);
	        else
	        continue; } }
	    j++; }
	return 0; }