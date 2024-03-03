#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,a[10000],i,S,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{ scanf("%d",&a[i]); }
	scanf("\n%d",&S);
	for(i=0;i<N;i++)
	{ for(j=0;j<N;j++)
	  { if(S==(a[i]+a[j]) && a[i]<a[j])
	     {printf("(%d,%d)",a[i],a[j]);
	      printf("\n"); } } }
	return 0; }