#include <stdio.h>
#include <stdlib.h>
int main() {
	int Height,Base,i,j,k;
	scanf("%d %d",&Height,&Base);
	for (i = 1;i<=Height;i++) {
	    for (k = Height - 1;k>=1;k--) {
	        printf(" "); }
	    for(j =i;j<(Base-2*Height + 3*i); j++ ) {
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }