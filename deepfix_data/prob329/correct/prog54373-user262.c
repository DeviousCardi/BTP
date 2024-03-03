#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a + b <= c || b + c <= a || a + c <= b) {
	    printf("Cannot form a Triangle"); }
	else if (a + b >= c || b + c >= a || a + c >= b) {
	    printf ("Not Right Triangle"); }
	else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a) {
	    printf ("Right Triangle"); }
	return 0; }