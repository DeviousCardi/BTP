#include <stdio.h>
int main(){
	float Ax,Ay,Cx,Cy,Px,Py;
	scanf("%f%f%f%f%f%f",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
	if ((Ax<Px && Px<Cx)&&(Ay<Py && Py<Cy))
	{	printf("Point is inside the rectangle.");
	}else if ((Px==Ax && Ay<=Py<=Cy) || (Px==Cx && Ay<=Py<=Cy) || (Py==Cy && Ax<=Px<=Cx) || (Py==Ay && Ax<=Px<=Cx)){
	    printf("Point is on the rectangle.");
	}else if((Px<Ax && Cx<Px)&&(Py<Ay && Cy<Py)){
	    printf("Point is outside the rectangle."); }
	return 0; }