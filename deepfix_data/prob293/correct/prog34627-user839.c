#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c&&b+c>a){
	if (b*b+c*c>=a*a)
	printf("Not obtuse Triangle");
	else
	printf("Obtuse Triangle"); }
	else if(b>=a&&b>=c&&a+c>b){
	if (a*a+c*c>=b*b)
	printf("Not Obtuse Triangle");
	else
	printf("Obtuse Triangle"); }
	else if(c>=b&&c>=a&&b+a>c){
	if (b*b+a*a>=c*c)
	printf("Not Obtuse Triangle");
	else
	printf("Obtuse Triangle"); }
	else
	printf("Cannot form a Triangle");
	return 0; }