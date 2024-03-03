#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j=0,k=0;
	int *a,*b;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	  scanf("%d ",(a+i));
	scanf("\n");
	for(i=0;i<m;i++)
	  scanf("%d ",(b+i));
	 for(i=0;i<n;i++)
	  printf("%d ",(a+i));
	printf("\n");
	for(i=0;i<m;i++)
	  printf("%d ",(b+i));
	return 0; }