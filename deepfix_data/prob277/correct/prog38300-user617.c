#include <stdio.h>
#include <stdlib.h>
int main() {
    int l,m,n,x;
	for (l=1;l<=(x-1)/2+1;l++) {
	    for (m=0;m<l-(x-1)/2+1;m++) {
    	    printf(" "); }
        for (n=1;n<=(x-l)*2+1;n++) {
            printf("*"); }
    	printf("\n"); }
	return 0; }