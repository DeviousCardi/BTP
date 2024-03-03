#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,A[10000],i,sum,j,k,C[10000],f;
	scanf("%d\n",&n);
	for(f=0;f<10000;f++) {
	    C[f]=0; }
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	scanf("\n%d",&sum);
	for(j=0;j<(n);j++) {
	    for(k=0;k<n;k++) {
	        if(sum==(A[j]+A[k]) && j != k&& (C[i]+C[j])==1)
	            {printf("(%d,%d)\n",A[j],A[k]);
	            C[i]=1;C[j]=1;} } }
	return 0; }