#include <stdio.h>
#include <stdlib.h>
int main() {
	int noofRows;
	scanf("%d",&noofRows);
	int row,colSpace,colStar;
	for(row=(noofRows+1)/2;row>=1;row--){
	    for(colSpace=row-1;colSpace>=1;colSpace--){
	        printf(" "); }
	    for(colStar=row;colStar<=noofRows-2*(row-1)+row-1;colStar++){
	    printf("%d",colStar%10); }
	printf("\n"); }
for(row=2;row<=(noofRows-1)/2;row++){
    for(colSpace=row-1;colSpace>=1;colSpace--){
	        printf(" "); }
	    for(colStar=row;colStar<=noofRows-2*(row-1)+row;colStar++){
	    printf("%d",colStar%10); }
	printf("\n"); }
	return 0; }