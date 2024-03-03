#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,S;int a[10000];
	int i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{    scanf("%d",&a[i]);	}
	scanf("%d",&S);
	for(i=0;i<N-1;i++) {
	    for(j=i+1;j<N;j++) {
	        if(a[j]==(S-a[i]))
	        {printf("(%d,%d)\n",a[i],a[j]);} } }
	return 0; }