#include <stdio.h>
#include <stdlib.h>
int main() {
	int noofRows;
	scanf("%d",&noofRows);
	int row,colSpace,colStar;
	for(row=(noofRows+1)/2;row>=1;row--){
	    for(colSpace=row-1;colSpace>=1;colSpace--){
	        printf(" "); }
	    for(colStar=row;colStar<=(2*(noofRows)-2*row+1);colStar++){
	    printf("%d",colStar%10); }
	printf("\n"); }
for(row=(noofRows-1)/2;row>=1;row--){
    for(colSpace=noofRows-row;colSpace>=1;colSpace--){
    printf(" "); }
for(colStar=colSpace;colStar<=(row*2)-1+colSpace;colStar++){
    printf("%d",colSpace%10); }
    printf("\n"); }
	return 0; }