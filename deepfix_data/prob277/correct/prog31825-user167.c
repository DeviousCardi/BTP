#include <stdio.h>
#include <stdlib.h>
int main() {
    int height;
    int i,j ,l;
    scanf("%d",&height);
	for(i=(height)/2+1; i<=height-1; i=i+1){
	    for(j=0; j<height-1-i; j=j+1){
	        printf("*"); }
	    int k;
	    for(k=0; k<2+2*i-height; k=k+1){
	        printf("*"); }
	    for(l=0; l<height-1-i; l=l+1){
	    printf("*"); }
	    printf("\n"); }
	return 0; }