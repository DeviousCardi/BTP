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
	 for(i=1;i<n/2;i++){
	     for(j=1;j>n/2;j++){
	         printf(" "); }
	     for(k=1;k>n/2;k++){
	         printf("*"); }
	     printf("\n"); }
	return 0; }