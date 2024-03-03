#include <stdio.h>
#include <stdlib.h>
int main() {
	int no_line;
	scanf("%d",&no_line);
	int i,line[10];
	for(i=0; i<no_line; i++) {
	    scanf("%d",&line[i]);
	    i++; }
	for(i=0; i<no_line; i++) {
	    printf("%d\n",line[i]); }
	return 0; }