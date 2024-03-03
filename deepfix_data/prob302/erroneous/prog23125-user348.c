#include <stdio.h>
int main() {
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f %f %f %f %f %f ",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
	if((Ax<Cx)&&(Ay<Cy)){
	    if((((Px>Ax)&&(Px<Cx))&&((Py<Cy)&&(Py>Ay))){
	        printf("Point is inside the rectangle."); }
	else if((Px>Cx)&&(Py>Cy)){
	    printf("Point is outside the rectangle"); } }
	return 0; }