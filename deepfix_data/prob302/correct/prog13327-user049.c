#include <stdio.h>
int main(){
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f%f%f%f%f%f",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
	if ((Ax<Px && Px<Cx)&&(Ay<Py && Py<Cy)) {
	    printf("Point is inside the rectangle."); }
	else if((Ax>Px && Px>Cx)&&(Ay>Py && Py>Cy)) {
	    printf("Point is outside the rectangle."); }
	return 0; }