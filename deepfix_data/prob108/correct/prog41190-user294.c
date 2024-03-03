#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,lines,spaces;
	scanf("%d",&a);
	printf("*\n");
	for(lines=1;lines<=(a-1)/2;lines++) {
        printf("*");
	    for(spaces=1;spaces<=lines-1;spaces++){
	        printf(" "); }
	    printf("\n"); }
	 int count = (a-3)/2 - 1;
	 for(lines = 1;lines<=(a-3)/2;lines++){
	     printf("*");
	     for(spaces=1;spaces<=count;spaces++){
	         printf(" "); }
	     count--;
	     printf("*");
	     printf("\n"); }
	 printf("*");
	return 0; }