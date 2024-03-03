#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[20];
    int i=0,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	    { scanf("%d",&x[i]); }
	for(i=1;i<n-1;i++)
	    { if(x[i]<x[i-1] && x[i]<x[i+1])
	        { printf("Yes\n"); }
	      else
	          printf("No\n"); }
	return 0; }