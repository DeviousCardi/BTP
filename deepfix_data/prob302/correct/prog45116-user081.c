#include <stdio.h>
int main() {
	float Ax=0, Ay=0, Cx=0, Cy=0, Px=0, Py=0;
	scanf("%f%f%f%f%f%f", &Ax, &Ay, &Cx, &Cy, &Px, &Py);
	if((Py==Ay && ((Px>=Ax && Px<=Cx) || (Px<=Ax && Px>=Cx))) || (Py==Cy && ((Px>=Ax && Px<=Cx) || (Px<=Ax && Px>=Cx)))){
	    printf("Point is on the rectangle."); }
	else if((Px==Ax && ((Py>=Ay && Py<=Cy) || (Py<=Ay && Py>=Cy))) || (Px==Cx && ((Py>=Ay && Py<=Cy) || (Py<=Ay && Py>=Cy)))){
	    printf("Point is on the rectangle."); }
	else if((Px>Ax && Px>Cx) || (Py>Ay && Py>Cy)){
	    printf("Point is outside the rectangle."); }
	else
	    printf("Point is inside the rectangle.");
	return 0; }