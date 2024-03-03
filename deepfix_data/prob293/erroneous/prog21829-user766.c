#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if
	((a+b!>c)||(b+c!>a)||(a+c!>b)) {
	    printf("cannot form a triangle"); }
	else{
	if
	((c*c>a*a+b*b)||(a*a>b*b+c*c)||(b*b>a*a+c*c)) {
	    printf("obtuse tiangle"); }
	else {
	    printf("Not obtuse triangle"); } }
	return 0; }