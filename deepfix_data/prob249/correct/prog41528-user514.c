#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n,last;
	scanf("%d",&n);
	last=n;
	for(i=1;i<=(n-1)/2;i++); {
	    for(space=1;space<=last;space++) {
	        printf(" "); }
	   last--;
	    if(i==1) {
	        printf("*"); }
	    else {
	        printf("*");
	        for(space=1;space<=i-1;space++) {
    	        printf("*"); } }
	   printf("aklflasfls\n"); }
	return 0; }