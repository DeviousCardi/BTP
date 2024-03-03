#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   for(j=0;j<k;j++)
	        printf(" ");
	    for(;j<n-2*k;j++)
	        printf("*");
	    if(i<n/2)
	        k++;
	    else
	        k--;
	    printf("\n"); }
	return 0; }