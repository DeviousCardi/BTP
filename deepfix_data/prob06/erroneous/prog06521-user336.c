#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,*a,*b;
	scanf("%d %d %d %d",&n, &m, &x, &y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d ",&a[i]);
	return 0; }