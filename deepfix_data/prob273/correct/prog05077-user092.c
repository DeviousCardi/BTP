#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int k,i,j;
	k=(h+1)/2;
	for(i=k;i>=1;i--){
	    for(j=k;j<=k;j++){
	        printf("%d",i%10); }
	    printf("\n"); }
	return 0; }