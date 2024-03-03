#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,k;
	scanf ("%d",&n);
	for (k=0;k<n;k=k+1)
	{if ((n%k==0) ||(n%(k-1)==0))  {
	    if(n==k+k-1) {
	        printf ("YES"); }
	        else
	        printf ("NO"); } }
	return 0; }