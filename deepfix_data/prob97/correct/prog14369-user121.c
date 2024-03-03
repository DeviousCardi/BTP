#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    for(j=i;j<=h/2-1;j++)
	    printf(" ");
	    for(k=1;k<=i;k++){
	        int l=h-k+1;
	        printf("%d",l);
	        l++; }
	    printf("\n"); }
	return 0; }