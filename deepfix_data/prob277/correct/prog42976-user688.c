#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, j ,h;
	scanf("%d", &h);
	for(i=1; i<=(h+1)/2; i++){
	    for(n=1; n<i; n++){ printf(" "); }
	    for (j=1; j<= h-2*i; j++){
	        printf("*"); }
	    printf("\n"); }
	return 0; }