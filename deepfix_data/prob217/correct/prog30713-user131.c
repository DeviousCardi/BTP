#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,k,i,u,j;
	scanf("%d\n",&n);
	 int m[n];
	 for(i=0;i<=n-1;i++) {
	  scanf("%d",&k);
	 m[i]=k; }
	 scanf("%d",&s);
	 for(u=0;u<(n-1)/2;u++) {
	   for(j=0;j<n;j++) {
	   if (m[u]+m[j]==s && m[u]!=m[j]  )
	   printf("(%d,%d)\n",m[u],m[j]); } }
	return 0; }