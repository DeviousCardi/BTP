#include <stdio.h>
#include <stdlib.h>
int main() {
 int noofrows;
 scanf("%d",&noofrows);
 int row,col;
 for(row=1;row<=noofrows;row++){
     for(col=1;col<=(2*row)-1;col++){
         int rem=col%10;
         printf("%d",rem); }
     printf("\n"); }
	return 0; }