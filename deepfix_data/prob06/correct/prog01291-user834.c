#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long x,y;
	scanf("%d %d %ld %ld",&n,&m,&x,&y);
	long *a=(long*)malloc(n*sizeof(int));
	long *b=(long*)malloc(m*sizeof(int));
	int i;
	for(i=0;i<n;i++){
	scanf("%ld",(a+i));
	printf("%ld",*(a+i)); }
	for(i=0;i<m;i++){
	scanf("%ld",(b+i));
	printf("%ld",*(a+i)); }
	return 0; }