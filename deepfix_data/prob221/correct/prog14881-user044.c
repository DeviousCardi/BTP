#include <stdio.h>
#include <stdlib.h>
int main() {
    int height;
    int i,j,k;
    scanf("%d",&height);
    int lenth=height;
    int flage=0;
    for(i=0;i<height;i++) {
        for(j=1;j<2*lenth;j++) {
            if(flage==0) {
                printf("*"); }
            if(flage==2 && j<(2*lenth-1) ) {
                printf(" "); }
            if(j==(2*lenth-1) && flage==2) {
                flage=1; }
            if(flage==1) {
                printf("*");
                flage=2; } }
        printf("\n");
        for(k=0;k<=i;k++) {
	      printf(" "); }
	    lenth=lenth-1;
	    flage=1; }
	return 0; }