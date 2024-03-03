#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x[10000];
    int i,j,n,c,e,k,s;
    scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]);}
	    scanf("%d",&s);
	    for(j=0;j<n;j++) {
	        c=x[j];
	    for(k=0;k<n;k++)
	     e=x[k];
	    if(s==(c+e));
	    printf("(%d,%d)\n",c,e); }
	return 0; }