#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,s,a[10000],n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n-1;i++)
	 for(j=i+1;j<n;j++)
	  if(a[i]+a[j]==s))
	   printf("(%d,%d)",a[i],a[j]);
	return 0; }