#include <stdio.h>
#include <stdlib.h>
int main() {
		int n,t,i,B[20];
		double A[20];
	scanf("%d",&n);
	for(i=0; i<n; i++)
	scanf("%lf",&A[i]);
	scanf("%d",&t);
	for(i=0; i<t; i++)
	scanf("%d",&B[i]);
	for(i=0; i<t; i++){
	    if(B[i]==0){
	    if(A[0]>A[1]||(n==1))
	        printf("Yes\n");
	       else printf("No\n");
	        i++; }
	  else if(A[B[i]]>A[B[i]-1]&&A[B[i]]>A[B[i]+1])
	printf("Yes\n");
	else printf("No\n");
	    i++; }
	return 0; }