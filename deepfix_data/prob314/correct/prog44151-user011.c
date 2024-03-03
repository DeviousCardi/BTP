#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{scanf("%d",&A[i]);}
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{   int ind;
	    scanf("%d",&ind);
	    if(ind<n&&ind>=0) {
	    if(ind==0&&A[ind]<A[ind+1])
	    printf("Yes\n");
	    else if(ind==n-1&&A[ind]<A[ind-1])
	    printf("Yes\n");
	    else if(A[ind]<A[ind+1]&&A[ind]<A[ind-1])
	    printf("Yes\n");
	    else
	    printf("No\n"); } }
	return 0; }