#include <stdio.h>
#include <stdlib.h>
int main() {
    int b,k,j,i,N,S,a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
	scanf("%d",&S);
	for(j=0;j<N;j++)
	{for(k=0;k<N;k++)
	{b=a[j]+a[k];
	if(b==S)
	printf("(%d,%d)",a[i],a[j]);}}
	return 0; }