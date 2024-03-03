#include <stdio.h>
#include <stdlib.h>
int maxvests(int *a,int **b,int x,int y);
int main() {
	int *a,**b,n,m,x,y,i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int**)malloc(sizeof(int*)*2);
	*b=(int*)malloc(sizeof(int)*m);
	*(b+1)=(int*)calloc(m,sizeof(int));
	for(i=0;i<n;i++)
	 scanf("%d ",a+i);
	for(i=0;i<m;i++)
	 scanf("%d ",&b[0][i]);
	printf("%d\n",maxvests(a,b,x,y););
	return 0; }