#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a) {
	    printf("Right Triangle"); }
	else {
	    printf ("dg"); }
	return 0; }