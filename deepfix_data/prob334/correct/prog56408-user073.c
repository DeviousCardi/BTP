#include <stdio.h>
#include <stdlib.h>
int main() {
	int Height,Base,i,j;
	scanf("%d %d",&Height,&Base);
	for (i = 1;i<=Height;i++) {
	    for(j =i;j<= ((Height-3)+3*i); j++ ) {
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }