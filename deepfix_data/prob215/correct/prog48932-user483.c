#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,k;
	scanf ("%d",&n);
	for (k=0;k<n;k=k+1)
	{if (n%k==0)  {
	    if(n==k*1+k*2) {
	        printf ("YES"); }
	        else
	        printf ("NO"); } }
	return 0; }