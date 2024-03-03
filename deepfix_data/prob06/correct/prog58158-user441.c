#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int i,j;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&b[i]); }
	return 0; }