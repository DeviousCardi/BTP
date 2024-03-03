#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	return 0; }