#include <stdio.h>
int main(){
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f%f%f%f%f%f",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
	if(Px>Ax,Py>Ay && Px<Cx,Py<Cy) {
	    printf("Point is inside the rectangle."); }
	else if((Px>Ax,Py>Ay && Py>Cy,Py>Cy) || (Px<Ax && Py<Cy)) {
	    printf("Point is outside the rectangle."); }
	else if((Px==Ax && Py==Cy)|| (Px==Ax && Py==Ay) || (Px==Cx && Py==Cy) || (Px==Cx && Py==Ay)) {
	    printf("Point is on the rectangle."); }
	return 0; }