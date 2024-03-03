#include <stdio.h>
#include <stdlib.h>
int main() {int n;scanf("%d",&n);int i,j;
	int p[n];int s;
	for(i=0;i<n;i++)
	{scanf("%d",&p[i]);}
	printf("\n");
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	    if((p[i]+p[j]==s)
	    printf("(%d,%d)",p[i],p[j]);} }
	return 0; }