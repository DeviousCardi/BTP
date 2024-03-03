#include <stdio.h>
int main() {
    float Ax,Ay,Cx,Cy,Px,Py;
    scanf("%f%f",&Ax,&Ay);
	scanf("%f%f",&Cx,&Cy);
	scanf("%f%f",&Px,&Py);
	if (Ax<Px && Px<Cx && Ay<Py && Py<Cy)
	printf("Point is inside the rectangle.");
	if( Ax<=Px && Px<=Cx && Py==Ay ) || ( Ax<=Px && Px<=Cx &&Py==Cy ) || ( Ay<=Py && Py<=Cy && Px==Ax ) || ( Ay<=Py && Py<=Cy && Px==Cx )
	printf("Point is on the rectangle.");
	if((Ax>Px || Px>Cx) && (Ay>Py || Py>Cy))
	printf("Point is outside the rectangle.");
	return 0; }