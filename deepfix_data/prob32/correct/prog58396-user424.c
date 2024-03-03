#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
	    scanf("%d",&A[i]); }
	int k=0;
	for(j=1;j<n-1;j++){
	    if((A[i]<A[i-1])&&(A[i]<A[i+1])){
	        k=k+1; } }
	if(k==0){
	    printf("No");
	} else printf("YEs");
	return 0; }