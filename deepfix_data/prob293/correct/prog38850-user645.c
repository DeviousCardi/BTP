#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b)) {
	printf("Obtuse Triangle"); }
	else if((a*a<=b*b+c*c)||(b*b<=a*a+c*c)||(c*c<=a*a+b*b)) {
	printf("Not Obtuse triangle"); }
	else {
    printf("Cannot form a triangle"); }
	return 0; }