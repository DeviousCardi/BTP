#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i;
	int A[-1]=0,A[20]=0;
	int A[20];
	scanf("%d",n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&A[i]); }
	scanf("%d",t);
	for(i=0;i<t;i++) {
	    scanf("%d",&j);
	    if(A[j-1]<A[j]&&A[j]>A[j+1])
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }