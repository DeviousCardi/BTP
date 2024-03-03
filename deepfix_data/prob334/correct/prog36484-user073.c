#include <stdio.h>
#include <stdlib.h>
int main() {
	int Height,Base,i,j;
	scanf("%d %d",&Height,&Base);
	for (i = 1;i<=Height;i++) {
	    for(j =i;j<= ((Base-3)+3*i); j++ ) {
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }