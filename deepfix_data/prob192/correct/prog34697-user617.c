#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,i,j,k,l,m,n;
	scanf ("%d",&x);
    for (i=1;i<=(x-1)/2;i++) {
	    for (j=(x-1)/2-i;j>=1;j--) {
	       printf(" "); }
	    for (k=1;k<=2*i-1;k=k+1) {
	       printf("*"); }
	    printf("\n"); }
	for (l=((x-1)/2)+1;l<=x;l++) {
	    for (m=0;m<l-(x-1)/2-1;m++) {
    	    printf(" "); }
        for (n=1;n<=x;n++) {
            printf("*"); }
    	x=x-2;
    	printf("\n"); }
	return 0; }