#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	while(n%2!=0){
	    for(i=n;i>=1;i=i-2){
	        printf("*"); }
	    for(j=0;j<=(n-1)/2;j++){
	        printf(" "); }
	    printf("\n"); }
	return 0; }