#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d", &h);
	int rt, ct;
	for(rt=1;rt<h;rt++) {
	    ct=1;
	    while(h-ct>0) {
	        printf(" ");
	        ct++; }
	    printf("*");
	    ct++;
	    if(rt!=1) {
	        while(ct<=rt+3) {
	            printf(" ");
	            ct++; }
	        printf("*\n"); } }
	return 0; }