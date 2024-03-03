#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for (i=1;i<=height;i++){
	    for (j=0;j<((height+1)/2);j++){
	        if (j==(height-1)/2||i+j==((height+1)/2)){
	            printf("*"); }
	        else{
	            printf(" "); } }
	printf("/n"); }
	return 0; }