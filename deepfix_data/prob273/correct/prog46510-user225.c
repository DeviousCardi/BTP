#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,a;
	char c= '*';
	scanf("%d",&h);
	a=(h%2) + 1;
	for ( i=1;i<=h;i++) {
	    for( j=1;j<=a;j++) {
	        printf("%c",c); } }
	return 0; }