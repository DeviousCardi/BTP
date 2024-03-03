#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a+b)>c && (b+c)>a && (a+c)>b) {
	    if(((a*a+b*b )==c*c) || ((b*b+c*c)==a*a) || ((a*a+c*c)==b*b))
	    printf("Right Triangle");
	    else
	    printf("Not Right Triangle"); }
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }