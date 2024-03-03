#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c&&b+c>a){
	if (b*b+c*c>=a*a)
	printf("not obtuse triangle");
	else
	printf("obtuse triangle"); }
	else if(b>=a&&b>=c&&a+c>b){
	if (a*a+c*c>=b*b)
	printf("not obtuse triangle");
	else
	printf("obtuse triangle"); }
	else if(c>=b&&c>=a&&b+a>c){
	if (b*b+a*a>=c*c)
	printf("not obtuse triangle");
	else
	printf("obtuse triangle"); }
	else
	printf("cannot form a triangle");
	return 0; }