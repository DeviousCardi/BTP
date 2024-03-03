#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i;
	long a[N];
	for(i=0;i<N;i=i+1){scanf("%d",&a[i]);}
	long S;scanf("%d",&S);
	for(i=0;i<N;i=i+1) {
	    for(j=i+1;i<N;j=j+1) {
	        if(a[i]+a[j]==S){printf("(%d,%d\n)",a[i],a[j]);} } }
	return 0; }