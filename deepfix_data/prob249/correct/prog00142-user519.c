#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, space,i,l;
    scanf("%d",&n);
    space = n/2; {
	    for(l=1;l<=space;l++)
	    printf(" ");
	    for(i=1;i<n;i++) {
	        printf("\n*"); }
	    space--; }
	return 0; }