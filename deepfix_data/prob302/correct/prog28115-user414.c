#include <stdio.h>
int main() {
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f %f",&Ax,&Ay);
	scanf("%f %f",&Cx,&Cy);
	scanf("%f %f",&Px,&Py);
    if(((Ax<Px)&&(Px<Cx))||((Cx<Px)&&(Px<Ax))) {
        if(((Ay<Py)&&(Py<Cy))||((Cy<Py)&&(Py<Ay))) {
            printf("Point is inside the rectangle."); } }
	return 0; }