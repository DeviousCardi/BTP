#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,a[10000],n,k,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(j=0;j<n;j++) {
	  	for(k=1,count=1;k<n;k++)
	   { if(a[j]==a[k])
	    count++; }
	    printf("%d",count); }
	return 0; }