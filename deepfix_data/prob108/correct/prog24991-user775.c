#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n,b,c,d;
	 scanf("%d",&n);
	 for(b=1;b<=(n+1)/2;b=b+1) {
	     printf("*");
	     for(c=1;c<b-1;c++) {
	         printf(" "); }
	     if(b=1)
	         printf("");
	         else
	         print("*");
	     printf("\n"); }
	return 0; }