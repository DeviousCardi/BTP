#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b+c,b<a+c,c<a+b) {
	    if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b) {
		printf("RIGHT ANGLED TRIANGLE"); }
	    else
	    if(a*a<b*b+c*c,b*b<a*a+c*c,c*c<a*a+b*b) {
	        printf("ACUTE ANGLED TRIANGLE"); }
	    else {
	    printf("NOT ACUTE ANGLED TRIANGLE"); } }
	else
	printf("CANNOT FORM A TRIANGLE");
	return 0; }