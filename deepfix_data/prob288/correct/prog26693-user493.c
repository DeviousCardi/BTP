#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<((2*n+2)/2);i=i+1){
	    for(j=i;j<=(2*n+1)/2;j++){
	        printf(" "); }
	    for(k=i;k>0;k--){
	        if((i+j+k)%2!=0)
	            printf("*");
	        else
	            printf("x"); }
	    printf("\n"); }
	 for(i=((2*n+4)/2);i>0;i=i-1){
	     for(j=n+3;j>i+1;j--){
	         printf(" "); }
	     for(k=0;k<i-1;k++){
	         if((i+j+1+k)%2==1)
	            printf("x");
	         else
	            printf("*"); }
	     printf("\n"); }
	return 0; }