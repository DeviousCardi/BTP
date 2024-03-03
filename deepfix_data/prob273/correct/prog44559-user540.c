#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k ;
	scanf("%d",&h);
	for(i=((h+1)/2);i>=1;i--) {
	       for (j=1;j<=i-1;j++) {
	       printf(" "); }
	       for (k=i;k<=((h+1)/2);k++){
	           printf("%d",k); }
	        printf("\n"); }
	    for(i=2;i<=((h+1)/2);i++){
	        for(j=1;j<((h+1)/2);j++){
	            printf(" "); }
	        for(k=i;k<=((h+1)/2);k++){
	            printf("%d",k); } }
	return 0; }