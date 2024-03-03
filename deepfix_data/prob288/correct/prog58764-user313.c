#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i++) {
	    for(j=1;j<=n;j++) {
	        if(j+n<i||i+j<(2*n+1))
	        printf(" ");
	        else if((i+j)%2==0)
	        printf("*");
	        else
	        printf("X"); } }
	return 0; }