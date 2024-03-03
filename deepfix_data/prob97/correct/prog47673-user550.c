#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,k;
	for(i=0;i<h;i++) {
	    for(k=h-i+1;k>0;k--)
	    printf(" ");
	    for(j=h-i;j<=h+i;j++) {
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }