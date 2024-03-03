#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,S,i,j;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	scanf("%d",&S);
	for(i=0;i<N;i++) {
	        for(j=i+1;j<N;j++)
	            if(a[i]+a[j]==S)
	                printf("(%d,%d)\n",a[i],a[j]); }
	return 0; }