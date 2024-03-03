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
	        if(sold[i]<=vest[j]+y||sold[i]>=sold[i]-x) {
	            printf("%d %d\n",i,j);
	            vest[j]=-1000; } } }
	return 0; }