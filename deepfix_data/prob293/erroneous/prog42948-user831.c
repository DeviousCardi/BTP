#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if ( (a*a+b*b)<(c*c) ){
	    printf("Obtuse Tringle"); }
	else if ( (a*a+b*b)>(c*c)),a+b>c ){
	    prientf("Not Obtuse Tringle"); }
	else if (a+b<c){
	    printf("cannot form a tringle"); }
	return 0; }