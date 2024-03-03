#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<=(n/2)+1;i=i+1){
	    for(j=i;j<=n;j++)
	    printf("*");
	    printf("\n"); }
	return 0; }