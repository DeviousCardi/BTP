#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,k;
	for(i=h;i>=1;i--) {
	    for(j=1;j<i;j++) {
	        printf(" "); }
	    for(k=i;k<=h+i;k++) {
	        printf("%d",k); }
	    printf("\n"); }
	return 0; }