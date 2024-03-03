#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	scanf("%d",&N);
	 int x[N] ;
	 int i,j;
	 for (i=0;i<N;i++)
	 { scanf("%d",x[i]); }
	 int s;
	scanf("%d",&s) ;
	for (i=0;i<N;i++)
	{ for (j=0;j<N;j++)
	if ((x[i] + x[j] == s ) &&(x[i] < x[j]))
	printf("(%d,%d)",i,j);
	else continue ; }
	return 0; }