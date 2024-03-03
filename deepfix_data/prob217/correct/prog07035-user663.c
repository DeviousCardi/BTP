#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,S,i,j;
	scanf("%d",&N);
	scanf("%d",&S);
	int a[N];
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<N;i++) {
	        for(j=i+1;j<N;j++)
	            if(a[i]+a[j]==S)
	                printf("(%d,%d)",a[i],a[j]); }
	return 0; }