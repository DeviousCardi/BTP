#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b;
	scanf("%d %d",&h,&b);
	int i,j,k;
	for(i=1;i<=h;i++) {
	    for(j=1;j<=h-i;j++)
	    printf(" ");
	    for(k=i;k<=b-2*(h-i+1)+i+1;k++)
	    printf("%d",k%10);
	    printf("\n"); }
	return 0; }