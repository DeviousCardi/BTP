#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=n;i>0;i=i-1){
	    for(j=n;j>0;j=n-1){
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }