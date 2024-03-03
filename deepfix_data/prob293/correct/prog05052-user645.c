#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%%%",&a,&b,&c);
	if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b)) {
	printf("Obtuse Triangle"); }
	if((a*a<b*b+c*c)||(b*b<a*a+c*c)||(c*c<a*a+b*b)) {
	printf("Not Obtuse Triangle"); }
	return 0; }