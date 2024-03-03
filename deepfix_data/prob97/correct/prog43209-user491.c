#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,p,q;
	scanf("%d",&h);
	for (i=1; i<=h; i++){
	    for (j=1; j<=h-i; j++){
	        printf(" "); }
	    p= h-i+1;
	    while(p<=h+i-1) {
	            printf("%d",p); }
	    printf("\n"); }
	return 0; }