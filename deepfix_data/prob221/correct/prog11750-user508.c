#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,k,i,j,a,b,l=1,m;
	scanf("%d",&n);
	j=2*n-1;
	k=2*n-5;
	for(i=1;i<=j;i++)
	{printf("*");}
	printf("\n");
	for(m=1;m<n;m++) {
	for(b=1;b<=l;b++)
	printf(" ");
	printf("*");
	l=l+1;
	for(a=1;a<=k;a++)
	   printf(" ");
	k=k-2;
	printf("*");
	printf("\n"); }
	return 0; }