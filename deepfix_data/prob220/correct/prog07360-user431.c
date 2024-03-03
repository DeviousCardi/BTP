#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d", &h);
	int rt, ct;
	for(rt=1;rt<h;rt++) {
	    ct=1;
	    while(h-rt+1-ct>0) {
	        printf(" ");
	        ct++; }
	    printf("*");
	    ct++;
	    if(rt!=1) {
	        while(ct<=rt+3) {
	            printf(" ");
	            ct++; }
	        printf("*"); }
	    printf("\n"); }
	int i;
	for(i=1;i<=h;i++) {
	    printf("*"); }
	return 0; }