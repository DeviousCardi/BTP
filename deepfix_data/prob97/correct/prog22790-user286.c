#include <stdio.h>
#include <stdlib.h>
int main() {
 int noOfRows;
 scanf("%d",&noOfRows);
 int row,colspace,colno;
 for(row=1;row<=noOfRows;row++){
     for(colspace=noOfRows-row;colspace>=1;colspace--){
         printf(" "); }
         for(colno=1;colno<=row;colno++){
             int remainder=colspace%10;
	        printf("%d",remainder); }
     printf("\n"); }
     return 0; }