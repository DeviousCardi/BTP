#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if (a==0 || b==0 || c==0 || a+b<=c || a+c <= b|| b+c <=a) {
	    printf("Cannot form a Triangle"); }
	else {
	if((a*a+b*b)==c*c || (b*b+c*c)==a*a || (c*c+a*a)==b*b) {
	        printf("Right Triangle"); }
	else {
	    printf("Not Right Triangle"); } }
	return 0; }