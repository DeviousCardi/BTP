#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<(((2*n+1)/2)+1);i=i+1){
	    for(j=i;j<n;j++){
	        printf(" "); }
	    for(k=i;k>1;k--){
	        if(k%2!=0)printf("*");
	        else
	        printf("x"); }
	    printf("\n"); }
	 for(i=n/2;i>1;i=i-1){
	     for(j=n+1;j>i+1;j--){
	         printf(" "); }
	     for(k=0;k<i-1;k++){
	         if(j%2!=0)printf("*");
	         else
	         printf("x"); }
	     printf("\n"); }
	return 0; }