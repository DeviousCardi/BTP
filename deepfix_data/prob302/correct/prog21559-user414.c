#include <stdio.h>
int main() {
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f %f",&Ax,&Ay);
	scanf("%f %f",&Cx,&Cy);
	scanf("%f %f",&Px,&Py);
    if(((Ax<Px)&&(Px<Cx))||((Cx<Px)&&(Px<Ax))) {
        if(((Ay<Py)&&(Py<Cy))||((Cy<Py)&&(Py<Ay))) {
            printf("Point is inside the rectangle."); }
        if((Py==Cy)||(Py==Ay))
        printf("Point is on the rectangle."); }
    if(((Ay<Py)&&(Py<Cy))||((Cy<Py)&&(Py<Ay))) {
        if((Px==Cx)||(Px==Ax))
        printf("Point is on the rectangle."); }
    else
    printf("Point is outside the rectangle.");
	return 0; }