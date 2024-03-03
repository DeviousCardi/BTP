#include <stdio.h>
#include <stdlib.h>
int main() {
    int l,m,n,x;
    scanf ("%d",&x);
	for (l=1;l<=((x-1)/2)+1;l++) {
	    for (m=0;m<l-1;m++) {
    	    printf(" "); }
        for (n=x;n>=2*l-1;n=n-2) {
            printf("*"); }
    	printf("\n"); }
	return 0; }