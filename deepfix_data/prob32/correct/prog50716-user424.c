#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
	    scanf("%d",&A[i]); }
	k=0;
	if((A[0]<A[1])||(A[n-1]<A[n-2]))
	    k=k+1;
	if(n>2){
	for(j=1;j<n-1;j++){
	    if((A[j]<A[j-1])&&(A[j]<A[j+1]))
	        k=k+1; } }
	if(k==0){
	    printf("No");
	} else printf("Yes");
	return 0; }