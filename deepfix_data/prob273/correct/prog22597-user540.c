#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k ;
	scanf("%d",&h);
	for(i=((h+1)/2);i>=1;i--) {
	       for (j=1;j<=i-i;j++) {
	       printf(" "); }
	       for (k=i;k<=((h+1)/2);k++){
	           printf("%d",k); }
	        printf("\n"); }
	return 0; }