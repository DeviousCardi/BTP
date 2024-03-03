#include <stdio.h>
#include <stdlib.h>
int main() {
	for (i=1;i<=t;i++) {
	    for (j=1;j<=t;j++) {
	        if(((i+j)==(t+1)) || (j==t))
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	for (i=1;i<=(n-t);i++) {
	    for (j=1;j<=t;j++) {
	        if((i+1)==j)
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }