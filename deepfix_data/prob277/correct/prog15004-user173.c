#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   for(j=0;j<k;j++)
	        printf(" ");
	    if(j>0)
	        j--;
	    for(;j<n-k-1;j++)
	        printf("*");
	    if(i<n/2)
	        k++;
	    else
	        k--;
	    printf("\n"); }
	return 0; }