#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t[1000],a,b,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	  scanf("%d",&t[i]);
	 for(i=0;i<n;i++) {
	   if(t[i]<=t[n-1-i]);
	   i=1;
	    sum=sum+i;
	     i++; }
	    a=sum;
	    b=n-a;
	     printf("%d %d ",a,b); }
	return 0; }