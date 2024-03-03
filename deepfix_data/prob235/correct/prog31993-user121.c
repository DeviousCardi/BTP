#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h/2+1;i++){
	    for(j=i;j<=h/2;j++){
	        printf(" "); }
	    int k,l=h/2-i+2;
	    for(k=i;k<=i*2-1;k++){
	        printf("%d",l%10); }
	    printf("\n"); }
	return 0; }