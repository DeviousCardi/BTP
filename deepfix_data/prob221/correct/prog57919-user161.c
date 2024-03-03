#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,h;
	scanf("%d",&h);
	for(i=1;i<h;i=i+2)
	{printf("*");}
	printf("\n");
	for(k=2;k<h-1;k++) {
	    for(i=0;i<k;i++) {
	        printf(" "); }
	    printf("*");
	    for(i=k;i<h-k+1;i++) {
	        printf(" "); }
	    printf("*");
	    for(i=h-k+1;i<h;i++) {
	        printf(" "); }
	    printf("\n"); }
	return 0; }