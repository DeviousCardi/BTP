#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<(n/2)+3;i=i+1){
	    for(j=i;j<n;j++){
	        printf(" "); }
	    for(k=i;k>1;k--){
	        printf("*"); }
	    printf("\n"); }
	 for(i=n/2;i>0;i=i-1){
	     for(j=n;j>i;j--){
	         printf(" "); }
	     for(k=0;k<i;k++){
	         printf("*"); }
	     printf("\n"); }
	return 0; }