#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b&&a!=0&&b!=0&&c!=0){
	if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b)
	printf("acute triangle");
else
printf("not acute triangle"); }
else
printf("cannot form a triangle");
	return 0; }