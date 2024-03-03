#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,v;
	scanf("%d",&n);
	int A[n],B[n];
	for(v=0;v<n;v++) {
	    scanf("%d",&A[v]); }
	int i,j;
	for(i=0;i<n;i++)
	{   B[i]==0;
	    for(j=1;j<n;j++) {
	        if(A[i]>a[j]) {
	            B[i]=B[i]+1; } } }
	int u;
	for(u=0;u<n;u++) {
	    printf("%d ",B[u]); }
	return 0; }