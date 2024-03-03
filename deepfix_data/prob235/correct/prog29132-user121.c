#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    for(j=i;j<=h/2;j++)
	    printf(" ");
	    int l=h%2+1;
	    for(k=i;k<=h/2;k++){
	        printf("%d",l%10);
	        l++; }
	printf("\n"); }
	return 0; }