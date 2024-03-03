#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    for(j=i;j<=h/2;j++)
	    printf(" ");
	    int l=(h+1)/2-i+1;
	    for(k=i;k<=h/2+1;k++){
	        printf("%d",l);
	        l++; }
	printf("\n"); }
	return 0; }