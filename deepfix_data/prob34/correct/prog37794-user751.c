#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j,k,n,t;
	scanf("%d",&n);
	int A[i];
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    scanf("%d",&k);
	    if(A[k]>A[k-1]&&A[k]>A[k+1]) {
	        printf("Yes");}
	        else
	        printf("No"); }
	return 0; }