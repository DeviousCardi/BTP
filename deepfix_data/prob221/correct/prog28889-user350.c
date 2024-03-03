#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,a,b;
	scanf("%d",&h);
	for (i=1;i<=h;i++) {
	    if(i==1) {
	        for(j=1;j<=(2*h-1);j++)
	            printf("*"); }
	    if(i==h) {
	        for(a=1;a<=h-1;a++)
	            printf(" ");
	        printf("*"); }
	    if (i!=1&&i!=h) {
	        for(b=1;b<=i;b++)
	            printf(" ");
	        printf("*");
	        for(k=1;k<=h-2*(i-2);k++)
	            printf(" ");
	        printf("*"); }
	    printf("\n"); }
	return 0; }