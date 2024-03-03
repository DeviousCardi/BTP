#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n;i=i+1){
	    for(j=i;j<i*2+1;j=j+1){
	        if(j%2!=0)
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }