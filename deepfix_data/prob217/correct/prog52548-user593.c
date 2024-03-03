#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x[10000];
    int i,j,n,s;
    scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]);
	    for(j=0;j<n;j++) {
	        scanf("%d",&x[j]);
	        scanf("%d",&s);
	    s==x[i]+x[j];
	    printf("(%d,%d)",x[i],x[j]); } }
	return 0; }