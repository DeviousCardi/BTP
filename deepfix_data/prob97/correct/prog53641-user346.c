#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=n;i>0;i=i-1){
	    for(j=i-1;j<i+2&&j>0;j=j-1){
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }