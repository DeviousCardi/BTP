#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	  scanf("%d",&t[i]);
      for(i=0;i<n;i++) {
	   if(t[i]<=t[n-1-i]);
	    i=i;
	     printf("%d",i); } }
	return 0; }