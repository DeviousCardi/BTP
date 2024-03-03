#include <stdio.h>
#include <stdlib.h>
int main() {
	int noofRows;
	scanf("%d",&noofRows);
	int row,colSpace,colStar;
	for(row=1;row<=(noofRows+1)/2;row++){
	    for(colSpace=noofRows-row;colSpace>=1;colSpace--){
	        printf(" "); }
	    printf(""); }
	printf("\n"); }
for(row=(noofRows-1)/2;row>=1;row--){
    for(colspace=noofRows-row;colspace>=1;colSpace--){
    printf(" "); }
for(colStar=1;colStar<=(row*2)-1;colStar++){
    printf("\n"); }
	return 0; }