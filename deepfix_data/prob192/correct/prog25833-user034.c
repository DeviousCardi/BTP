#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<(n-1)/2;i++){
	    for(j=(n-1)/2;j>i;j--){printf(" ");}
	    for(j=0;j<=2*i;j=j+1){printf("*");}
	    printf("\n"); }
		for(i=(n-1)/2;i>=0;i--){
	    for (j=(n-1)/2;j>i;j--){printf(" ");}
	    for(j=0;j<2*i+1;j=j+1){printf("*");}
	    printf("\n"); }
	return 0; }