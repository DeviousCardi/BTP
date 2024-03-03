#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,sold[10000],vest[1000],i,j;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d ",&sold[i]);
	for(i=0;i<m;i++);
	scanf("%d ",&vest[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(sold[i]<=vest[j]+y&&sold[i]>=vest[j]-x) {
	            printf("%d %d\n",i+1,j+1);
	            vest[j]=-100000;
	           break; } } }
	return 0; }