#include <stdio.h>
#include <stdlib.h>
int main() {
    int k,j,i,N,S,a[100];
    scanf("%d\n",&N);
    printf("\n");
    for(i=0;i<N;i++)
    scanf("%d\n",&a[i]);
	printf("\n");
	scanf("%d\n",&S);
	for(j=0;j<N;j++)
	{for(k=0;k<N;k++)
	{if((a[i]+a[j])==S)
	printf("(%d,%d)",a[i],a[j]);}}
	return 0; }