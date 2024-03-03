#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int k,i,j;
	k=(h+1)/2;
	for(i=k;i>=1;i--){
	    for(j=i;j<=k;j++){
	        printf("%4d",i%10); }
	    printf("\n"); }
	return 0; }