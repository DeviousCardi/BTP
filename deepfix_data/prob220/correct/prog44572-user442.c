#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, b, i, j;
	scanf("%d %d",&h, &b);
	for(i=1; i<=h; i++) {
	    if(i==1 || i==h) {
	        for(j=1; j<=b; j++) {
	            printf("*"); } }
	    else {
	        for(j=1; j<=b; j++) {
                if(j==1 || j==b) {
                    printf("*"); } } }
	    printf("\n"); }
	return 0; }