#include <stdio.h>
#include <stdlib.h>
int main() {
    int l,m,n,x,k,o,a;
    int count=3;
    scanf ("%d",&x);
	for (l=1;l<=((x-1)/2)+1;l++) {
	    for (m=0;m<l-1;m++) {
    	    printf(" "); }
        for (n=x;n>=2*l-1;n=n-1) {
            printf("*"); }
    	printf("\n"); }
    for (k=((x-1)/2);k>=1;k--) {
        for (o=1;o<k;o++) {
            printf(" "); }
        for (a=1;a<=count;a=a+1) {
            printf("*"); }
        count=count+2;
        printf("\n"); }
    return 0; }