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
	    for(j=0;j<n;j++)
	    for(k=0;k<n;k++){
	    if(s==x[k]+x[j])
	    printf("(%d,%d)",x[i],x[j]);}
	return 0; }