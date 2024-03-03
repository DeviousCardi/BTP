#include <stdio.h>
#include <stdlib.h>
int main() {
	int totalRows=5;
	int row,colSpace,colStar;
	for(row=1;row<=totalRows;row++){
	    for(colSpace=totalRows-row;colSpace>=1;colSpace--){
	        printf("*"); }
	    for(colStar=1;colStar<=2*row-1;colStar++){
	        printf(""); }
	    printf("\n"); }
	for(row=totalRows-1;row>=1;row--){
	    for(colSpace=1;colSpace<=totalRows-row;colSpace++){
	        printf("*"); }
	    for(colStar=1;colStar<=2*row-1;colStar++){
	        printf("*"); }
	    printf("\n"); }
	return 0; }