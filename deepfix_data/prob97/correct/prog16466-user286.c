#include <stdio.h>
#include <stdlib.h>
int main() {
 int noOfRows;
 scanf("%d",&noOfRows);
 int row,colspace,colno,col;
 for(row=1;row<=noOfRows;row++){
     for(colspace=noOfRows-row;colspace>=1;colspace--){
         printf(" "); }
         for(colno=1;colno<=(2*row)-1;colno++){
             for(col=1;col<=row;col++){
        int remainder=col%10;
	    printf("%d",remainder); } }
          printf("\n"); }
     return 0; }