#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
	scanf("%d",&n);
	for(i=0;i<(n-1)/2;i++){
	    for (j=0;j<i;j++){printf(" ");}
	    for(j=n;j>2;j=j-1){printf("*");}
	    printf("\n"); }
	for(i=0;i<(n+1)/2;i++){
	    for(j=(n-1)/2;j>i;j--){printf(" ");}
	    for(j=0;j<=i;j=j+1){printf("*");}
	    printf("\n"); }
	return 0; }