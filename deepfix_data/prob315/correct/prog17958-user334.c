#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,v;
	scanf("%d\n",&n);
	int A[n],B[n];
	for(v=0;v<n;v++) {
	    scanf("%d ",&A[v]); }
	int i,j;
	for(i=0;i<n;i++)
	{   B[i]=0;
	    for(j=1;j<n;j++) {
	        if(A[i]>A[j]) {
	            B[i]=B[i]+1; } } }
	int u;
	int sum=0;
	for(u=0;u<n;u++) {
	    sum=sum+B[u]; }
	printf("%d\n",sum);
	int t;
	for(t=0;t<n;t++) {
	    printf("%d ",B[t]); }
	return 0; }