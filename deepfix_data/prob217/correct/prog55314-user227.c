#include <stdio.h>
#include <stdlib.h>
int main() {
    int k,j,i,N,S,a[100];
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    scanf("%d\n",&a[i]);
	scanf("%d\n",&S);
	for(j=0;j<N;j++)
	{for(k=0;k<N;k++)
	{if((a[j]+a[k])==S)
	printf("(%d,%d)",a[i],a[j]);}}
	return 0; }