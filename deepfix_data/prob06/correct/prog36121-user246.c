#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *des_vest=(int*)malloc(n*sizeof(int));
	int *av_vest=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",des_vest+i);
	for(i=0;i<n;i++)
	scanf("%d",av_vest+i);
	for(i=0;i<n;i++)
	printf("%d",des_vest+i);
	for(i=0;i<n;i++)
	printf("%d",av_vest+i);
	return 0; }