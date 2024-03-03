#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, i, j, k;
	scanf("%d", &h);
	for(i=0; i<h; i=i+1){
	    for(k=0; k<(h/2-i); k++){
	        printf(" "); }
	    for(j=(h/2 +1); j>(h/2 - k); j--){
	        printf("%d", h); }
	    printf("\n"); }
	return 0; }