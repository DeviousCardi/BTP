#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, i, j, k;
	scanf("%d", &h);
	for(i=0; i<h/2; i++){
	    for(j=(h/2 - i) ; j>0 ; j-- ){
	        printf(" ");
	        for(k=(h/2+1 -i); k<=(h/2+1+i); k++){
	            printf("%d", k); } }
	    printf("\n"); }
	return 0; }