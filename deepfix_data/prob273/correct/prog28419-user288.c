#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l;
	scanf("%d",&h);
	for(i=1;i<=h/2+1;i++){
	    for(j=i;j<=h/2;j++)
	    printf(" ");
	    l=h/2-i+2;
	    for(k=1;k<=i;k++){
    	    printf("%d",l%10);
    	    l++; }
	    printf("\n"); }
	return 0; }