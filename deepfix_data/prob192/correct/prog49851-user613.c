#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,j,n,z,k,l,m;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	z++;
	{if(z<n-a)
	{for(k=0;k<n-a;k++)
	printf(" ");
	for(j=0;j<2*a-1;j++)
	printf("*");
	printf("\n");}
	else
	a=a-2;}
	{for(l=n-a;l>0;l=l+1)
	printf(" ");
	for(m=2*(n-a)-1;m>0;m--)
	printf("*");}
	return 0; }