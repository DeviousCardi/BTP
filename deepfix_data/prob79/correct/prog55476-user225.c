#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,k,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	k=0;
	j=0;
	for(i=0;i<n;i++) {
	    k=k+a[i];
	    j=j+a[n-1-i];
	    if(k<=j)
	        break; }
	printf("%d %d",i,n-i);
	return 0; }