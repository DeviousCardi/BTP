#include <stdio.h>
int main() {
    float Ax,Ay,Cx,Cy,Px,Py;
    scanf("%f %f",&Ax,&Ay);
    scanf("%f %f",&Cx,&Cy);
    scanf("%f %f",&Px,&Py);
    if ( (((Px>Ax) && (Px<Cx)) || ((Px<Ax) && (Px>Cx))) && (((Py>Ay) && (Py<Cy)) || ((Py<Ay) && (Py>Cy))) )
    { printf("Point is inside the rectangle"); }
	return 0; }