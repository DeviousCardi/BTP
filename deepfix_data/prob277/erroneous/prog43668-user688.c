#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, j ,h;
	scanf("%d", &h);
	for(i=1; i<=(h+1)/2; i++){
	    for(n=1; n<i; n++){ printf(" "); }
	    for (j=1; j<= h-2*i+2; j++){
	        printf("*"); }
	    printf("\n"); }
	for(k=1; k<=(h-1)/2; k++){
	for(m=1; m<=(h-1)/2+1-k){
	    printf(" ");}
	    for(l=1; l<=k+2; l++){
	        printf("*"); } }
	return 0; }