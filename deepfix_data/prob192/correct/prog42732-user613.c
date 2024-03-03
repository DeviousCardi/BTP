#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,z,k,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{if(z<n-i)
	{for(k=0;k<n-i;k++)
	printf(" ");
	for(j=0;j<2*i-1;j++)
	printf("*");
	printf("\n");}
	else
	i=i-2;}
	{for(l=n-i;l>0;l=l+1)
	printf(" ");
	for(m=2*(n-i)-1;m>0;m--)
	printf("*");}
	return 0; }