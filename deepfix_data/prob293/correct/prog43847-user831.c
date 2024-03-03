#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if ( (a*a+b*b)<(c*c) ){
	    printf("Obtuse Tringle"); }
	else  { if (a+b<=c){printf("cannot form a tringle");}
	else {printf("not obtuse tringle");} }
	return 0; }