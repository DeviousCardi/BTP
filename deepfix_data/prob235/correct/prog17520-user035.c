#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    j=2*i-1;
	    if(j>h) {
	        j=2*h-j; }
	    for(k=0;k<h;k++) {
	        if(k<((h-j)/2)) {
	            printf(" "); }
	        else if(k>=((h+j)/2)) {
	            break; }
	        else {
	            printf("%d",((k+1)%10)); } }
	    printf("\n"); }
	return 0; }