#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,k,i,j,s;
	scanf("\n%d",&n);
	int a[n];
	for(k=0;k<n;k++)
	scanf("%d",&a[k]);
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    for(j=1;j<n;j++)
	if(a[i]+a[j]==s)
	printf("(%d,%d)",a[i],a[j]); }
	return 0; }