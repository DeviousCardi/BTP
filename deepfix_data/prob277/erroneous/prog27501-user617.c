#include <stdio.h>
#include <stdlib.h>
int main() {
    int l,m,n,x,k,o,a;
    scanf ("%d",&x);
	for (l=1;l<=((x-1)/2)+1;l++) {
	    for (m=0;m<l-1;m++) {
    	    printf(" "); }
        for (n=x;n>=2*l-1;n=n-1) {
            printf("*"); }
    	printf("\n");
    for (k=((x-1)/2)+2;k<=x;k++) {
        for (o=x;o<=0;o--) {
            printf(" "); }
    for (a=3;a<=x;a=a+2) {
        printf("*"); }
    printf("\n"); }
    return 0;