#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>=0&&a<100)&&(b>=0&&b<100)&&(c>=0&&c<100)) {
	    if((a+b)>c&&(a+c)>b&&(c+b)>a) {
	        if((a*a+b*b)==c*c||(a*a+c*c)==b*b||(c*c+b*b)==a*a)
	            printf("Right Triangle");
	        else
	            printf("Not Right Triangle"); }
	    else
	        printf("Cannot form a Triangle"); }
	return 0; }