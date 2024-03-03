#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if ( (a*a+b*b)<(c*c) ){
	    printf("Obtuse Tringle"); }
	else  { if (a+b<=c){printf("Cannot form a Tringle");}
	else {printf("Not Obtuse Tringle");} }
	return 0; }