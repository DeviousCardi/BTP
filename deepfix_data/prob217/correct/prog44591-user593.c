#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x[10000];
    int i,j,n,k,s;
    scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]);}
	    scanf("%d",&s);
	    for(j=0;j<i;j++)
	    for(k=0;k<i;k++){
	        if(i!=j)
	    if(s==x[j]+x[k])
	    printf("(%d,%d)\n",x[j],x[k]);}
	return 0; }