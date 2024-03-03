#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,*a,*b,i;
	scanf("%d%d%d%d\n",n,m,x,y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	 scanf("%d ",a+i);
	 scanf('\n');
	for(i=0;i<m;i++)
	 scanf("%d ",b+i);
	return 0; }