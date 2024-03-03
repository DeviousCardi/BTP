#include <stdio.h>
#include <stdlib.h>
int a[100], b[100];
int main() {
	int n,m,x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int i, j;
	for(i=0;i<n; i++)
	  scanf("%d",&a[i]);
	for(i=0; i<m; i++)
	  scanf("%d",&b[i]);
	return 0; }