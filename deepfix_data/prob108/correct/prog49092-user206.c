#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i;
	scanf("%d",&a);
	printf("*\n");
	for(i=1;i<=(((a-1)/2)-1);i++) {
	    printf("*");
	    int r;
	    for(r=0;r<i-1;r++) {
	        printf(" "); }
	    printf("*\n"); }
	return 0; }