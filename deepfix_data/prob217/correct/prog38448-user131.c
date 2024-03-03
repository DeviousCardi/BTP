#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,k,i,u,j;
	scanf("%d%d",&n,&k);
	 int m[n];
	 for(i=0;i<n;i++) {
	 m[i]=k;
	 scanf("%d",&k); }
	 scanf("%d",&s);
	 for(u=0;u<n;u++) {
	   for(j=0;j<n;j++) {
	   if (m[u]+m[j]==s)
	   printf("(%d,%d)",u,j); } }
	return 0; }