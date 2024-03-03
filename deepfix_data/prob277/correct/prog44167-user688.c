#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, j ,h;
	scanf("%d", &h);
	i=1;
	while(i<=h){
	    for(n=1; n<i; n++){
	        printf(" ");}
	    for(j=1; j<=i; j++){
	        printf("*");
	    }    for(j=1; j<=(h-1)/2; j++){
	        printf("*"); } }
	return 0; }