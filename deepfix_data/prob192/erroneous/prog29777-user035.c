#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++)        \\outer loop {
	    j=2*i-1;                \\to determine the no. of stars
	    if(j>h) {
	        j=2*h-j; }
	    for(k=0;k<h;k++)            \\inner loop {
	        if(k<((h-j)/2)) {
	            printf(" "); }
	        else if(k>=((h+j)/2)) {
	            break; }
	        else {
	            printf("*"); } }
	    printf("\n"); }
	return 0; }