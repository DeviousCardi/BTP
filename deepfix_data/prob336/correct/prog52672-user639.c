#include <stdio.h>
#include <stdlib.h>
int main() {
	float x,y,z;
	scanf("%f%f%f",&x,&y,&z);
	if((x+y<z)||(y+z<x)||(x+z<y)){
	    printf("cannot form a triangle");
	} else {
	    if ((x*x+y*y>z*z)||(x*x+z*z>y*y)||(y*y+z*z>x*x)){
	    printf("triangle is acute");
	    }else {
	        printf("not acute triangle"); } }
	return 0; }