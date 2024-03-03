#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,N,S,a[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{scanf("%d",&a[i]); }
	scanf("%d",&S);
		for(i=0,j=N-1;i<=j;i++)
		if(a[i]+a[j]==S)
		{printf("%d%d",(a[i],a[j])); }
		else
		continue;
	return 0; }