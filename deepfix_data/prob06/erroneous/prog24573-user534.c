#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,*a,*b,*c,i,j=0;count=0,k=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	c=(int*)malloc(sizeof(int)*(m+n));
	for (i=0;i<n;i++)
	scanf("%d",a+i);
	for (i=0;i<n;i++)
	scanf("%d",b+i);
	return 0; }