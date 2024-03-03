#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,h;
	scanf("%d",&h);
	if (h=1)
	    printf("*");
	if (h=3)
	    printf("*\n**\n*");
	if (h>3)
	for(a=1;a<=h;a++) {
	    if(a==1||a==h)
	        printf("*");
	    if(a==2||a==h-1)
	        printf("**");
	    if(a>2&&a<h-1)
	    for(b=1;b<=h-4;b++) {
	        printf("*");
	        for(c=1;c<=b;c++)
	            printf(" ");
	        printf("*"); } }
	return 0; }