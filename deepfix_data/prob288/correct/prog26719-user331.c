#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(2*n)+1;i=i+1){
	    for(j=1;j<=n+1;j=j+1){
	        if(j<=(n+1)-i||j<=i-(n+1)){
	            printf(" "); }
	        else{
	            if((i+j)%2==0){
	                printf("x"); }
	            else{
	                printf("*"); } } }
	    printf("\n"); }
	return 0; }