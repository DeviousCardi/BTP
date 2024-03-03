#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c||c*c==a*a+b*b||b*b==a*a+c*c) {
	printf("RIGHT TRIANGLE"); }
	if(a*a<b*b+c*c,b*b<a*a+c*c,c*c<a*a+b*b) {
	    printf("ACUTE TRIANGLE"); }
	if(a<b+c,b<a+c,c<a+b,a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b) {
	        printf("NOT ACUTE TRIANGLE"); }
	else {
	printf("CANNOT FORM A TRIANGLE"); }
	return 0; }