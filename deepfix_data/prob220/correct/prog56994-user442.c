#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, i, j;
	scanf("%d",&h);
	for(i=1; i<=h; i++) {
	    if(i==1 || i==h) {
	        for(j=1; j<=i; j++) {
	            printf("*"); } }
	    else {
	        for(j=1; j<=i; j++) {
                if(j==1 || j==i) {
                    printf("*"); }
                else {
                    printf(" "); } } }
	    printf("\n"); }
	return 0; }