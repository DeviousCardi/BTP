#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int s;scanf("%d",&s);
	for(k=0;k<n;k++)
	for(j=k+1;j<n;j++)
	if(a[k]+a[j]==s)printf("(%d,%d)\n",k,j);
	return 0; }