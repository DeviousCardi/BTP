#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,x;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    for(j=n-i;j>=1;j=j-1){
	        printf(" ");
	        for(x=1;x<i;x++){
	            printf("x"); }
	        printf("\n"); } }
	return 0; }