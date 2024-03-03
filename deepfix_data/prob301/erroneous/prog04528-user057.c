#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,int ctr=0,i,j,u;
	scanf("%d",&n);
	int x[n],h[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if(x[i]==x[j])
	        ctr++; }
	    h[i]=ctr;
	    ctr=0; }
	{u=max(h[n]);
	return 0; }