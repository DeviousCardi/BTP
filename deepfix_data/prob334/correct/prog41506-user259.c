#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,l,i,j,c;
	scanf("%d%d",&h,&l);
	c=l-2*(h-1);
	for(i=1;i<=h;i++) {
	    for(j=1;j<=h-i;j++)
	    printf(" ");
	    for(j=1;j<=c;j++) {
	        if((i+j-1)<10)
	        printf("%d",i+j-1);
	        else
	        printf("%d",(i+j-1)%10); }
	    printf("\n");
	    c+=2; }
	return 0; }