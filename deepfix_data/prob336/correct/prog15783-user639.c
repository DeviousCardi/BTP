#include <stdio.h>
#include <stdlib.h>
int main() {
	float x,y,z;
	scanf("%f%f%f",&x,&y,&z);
	if((x+y<=z)||(y+z<=x)||(x+z<=y)||(x==0)||(y==0)||(z==0)){
	    printf("Cannot form a Triangle");
	} else {
	    if ((x*x+y*y>z*z)&&(x*x+z*z>y*y)&&(y*y+z*z>x*x)){
	    printf("Acute Triangle");
	    }else {
	        printf("Not Acute Triangle"); } }
	return 0; }