#include <stdio.h>
#include <stdlib.h>
int main() {
	int no_line;
	scanf("%d",&no_line);
	int i,line[10];
	for(i=0; i<2*no_line; i++) {
	    if(i%2==0) {
	        scanf("%d",&line[i/2]);
	        i++; } }
	for(i=0; i<2*no_line; i++) {
	    printf("%d\n",line[i/2]); }
	return 0; }