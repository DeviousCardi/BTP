#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t;
	scanf("%d",&n);
	int A[n];
	if(n>=20)
	return 1;
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	scanf("%d",&t);
	int E[t];
	for(i=0;i<t;i++)
	scanf("%d",&E[i]);
	for(i=0;i<t;i++) {
	    if(n==1)
	    printf("Yes");
	    else if(E[i]==0&&E[i]!=n-1) {
	        if(A[1]>A[0])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else if(E[i]==n-1) {
	        if(A[n-2]>A[n-1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else {
	        if(A[i-1]>A[i]&&A[i]<A[i+1])
	        printf("Yes\n");
	        else
	        printf("No\n"); } }
	return 0; }