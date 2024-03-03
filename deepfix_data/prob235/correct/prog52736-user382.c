#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, h;
	scanf("%d",&h);
	for(i=0;i<=h/2;i++) {
	    for(j=1;j<=h/2-i;j++)
	            printf(" ");
	    for(j=h/2+1-i;j<=(h/2+1+i);j++)
	            printf("%d",(j%10));
	    printf("\n"); }
	for(i=h/2-1;i>=0;i--) {
	    for(j=1;j<=h/2-i;j++)
	            printf(" ");
	    for(j=h/2+1-i;j<=(h/2+1+i);j++)
	            printf("%d",(j%10));
	    if(i!=0)
	    printf("\n"); }
	return 0; }