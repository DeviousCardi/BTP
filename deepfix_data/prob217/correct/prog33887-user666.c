#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i=i+1){scanf("%d",&a[i]);}
	int S;scanf("%d",&S);
	for(i=0;i<N;i=i+1) {
	    for(j=i+1;j<N;j=j+1) {
	        if(a[i]+a[j]==S){printf("(%d,%d)\n",a[i],a[j]);} } }
	return 0; }