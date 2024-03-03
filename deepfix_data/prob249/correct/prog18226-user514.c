#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n,last,line;
	scanf("%d",&n);
	last=(n-3)/2+1;
	for(i=1;i<=(n+1)/2;i++){
	    for(space=1;space<=last;space++) {
	        printf(" "); }
	    last--;
	    if(i==1) {
	        printf("*"); }
	    else {
	        printf("*");
	        for(space=1;space<=i-2;space++) {
    	        printf(" "); }
    	    printf("*"); }
	   printf("\n"); }
	last = (n-3)/2 - 1;
	for(line = 1;line<=(n-1)/2;line++) {
	    for(space=1;space<=line;space++){
	        printf(" "); }
	    printf("*");
	   for(space=1;space<=last;space++){
	       printf(" "); }
	   printf("*\n"); }
	return 0; }