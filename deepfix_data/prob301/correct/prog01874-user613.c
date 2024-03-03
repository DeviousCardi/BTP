#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[10000],n,i,j,k,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]);}
	    for(j=1;j<n;j++) {
	        if(A[j]==A[k])
	        {x=x+1; }
	    k++;
	printf("%d\n",x); }
	return 0; }