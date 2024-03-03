#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, b, i, j;
	scanf("%d %d",&h, &b);
	for(i=1; i<=h; i++) {
	    for(j=1; j<=b; j++) {
	        if(i==1 || i==h) {
	            printf("*"); }
	        else {
	            if(j==1 || j==b) {
	                printf("*"); } }
	        printf("\n"); } }
	return 0; }