#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++){
	    for(j=1; j<=n-i; j++){
	        printf(" ");
	        while (j==(n+1-i)&&(n+i-1)){
	            printf("*");}
	            printf("\n"); }
	printf("\n");}
	if(i=n)
	{printf("*");}
	return 0; }