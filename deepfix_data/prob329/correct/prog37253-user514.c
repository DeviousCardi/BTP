#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if (a+b<c) {
	    printf("Cannot form a Triangle"); }
	else {
	if((a*a+b*b)==c*c) {
	        printf("Right Triangle"); }
	else {
	    printf("Not Right Triangle"); } }
	return 0; }