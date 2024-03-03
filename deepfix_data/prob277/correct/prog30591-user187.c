#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a=1;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	        for(j=n;j>0;j--) {
	               printf("*"); }
	            printf("\n");
	              a=a+1; }
	return 0; }