#include <stdio.h>
int main() {
    float Ax,Ay,Cx,Cy,Px,Py,X1,X2,Y1,Y2;
    scanf("%f%f",&Ax,&Ay);
	scanf("%f%f",&Cx,&Cy);
	scanf("%f%f",&Px,&Py);
	if(Ax>Cx) {
	    X2=Ax;
	    X1=Cx; }
	else {
	    X2=Cx;
	    X1=Ax; }
	if(Ay>Cy) {
	    Y2=Ay;
	    Y1=Cy; }
	else {
	    Y2=Cy;
	    Y1=Ay; }
	if (X1<Px&&Px<X2&&Y1<Py&&Py<Y2)
	printf("Point is inside the rectangle.");
	if((Px==X1&&Y1<=Py&&Py<=Y2)||(Px==X2&&Y1<=Py&&Py<=Y2)||(Py==Y1&&X1<=Px&&Px<=X2) || (Py==Y2&&X1<=Px&&Px<=X2))
	printf("Point is on the rectangle.");
	if((Px<X1||Px>X2)&&(Py<Y1&&Py>Y2))
	printf("Point is outside the rectangle.");
	return 0; }