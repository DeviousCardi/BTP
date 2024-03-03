#include <stdio.h>
#include <stdlib.h>
int main() {
	int noOfRows;
	int row,colspace,colstar;
	int remainder;
	scanf("%d",&noOfRows);
	for(row=1;row<=noOfRows;row++){
	for(colspace=noOfRows-row;colspace>=1;colspace--){
	        printf(" "); }
	    for(colstar=1;colstar<=(noOfRows*2)-1;colstar++){
	        remainder=colstar%10;
	    printf("%d",remainder); }
	    printf("\n"); }
	return 0; }