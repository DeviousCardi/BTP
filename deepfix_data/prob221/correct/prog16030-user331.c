#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=(2*n)-1;i=i+1){
	    printf("*"); }
	printf("\n");
	for(j=1;j<=n-1;j=j+1){
	    for(k=1;k<=((2*n)-1)-j;k=k+1){
	        if(k==j+1){
	            printf(" "); }
	        else{
	            printf("*"); } }
	    printf("\n"); }
	return 0; }