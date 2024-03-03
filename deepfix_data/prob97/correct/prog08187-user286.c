#include <stdio.h>
#include <stdlib.h>
int main() {
 int noOfRows;
 scanf("%d",&noOfRows);
 int row,colspace,colno;
 for(row=1;row<=noOfRows;row++){
     for(colspace=noOfRows-row;colspace>=1;colspace--){
         printf(" "); }
         for(colno=1;colno<=(2*row)-1;colno++){
             int remainder=colno%5;
	        printf("%d",remainder); }
     printf("\n"); }
     return 0; }