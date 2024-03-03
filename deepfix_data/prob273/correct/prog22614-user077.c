#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d", &h);
	int i,a,b,c;
	for (i=1;i<=(h+1)/2;i++) {
	        for (a=((h+1)/2)-i;a>=1;a--)
	            printf(" ");
	        for (b=1;b<=i;b++)
	            printf("%d",c=(h+1)/2-i+b);
	       printf("\n"); }
	int j,d,e,f;
	for (j=1;j<=(h-1)/2;j++) {
	        for (d=1;d<=j;d++)
	            printf(" ");
	        for (e=1;e<=((h+1)/2)-j;e++)
	            printf("%d",f=1);
	            printf("\n"); }
	return 0; }