#include <stdio.h>
int main()
{float Ax,Ay,Cx,Cy,Px,Py,AC2,AP2,CP2;
scanf("%f%f%f%f%f%f",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
AC2=(Cy-Ay)*(Cy-Ay)+(Cx-Ax)*(Cx-Ax);
AP2=(Ay-Py)*(Ay-Py)+(Ax-Px)*(Ax-Px);
CP2=(Cy-Py)*(Cy-Py)+(Cx-Px)*(Cx-Px);
if((AP2+CP2)>AC2)
printf("Point is outside the rectangle.");
else
if((AP2+CP2)<=AC2&&(Px==Py&&Px==-Py))
printf("Point is on the rectangle.");
else
if((AP2+CP2)<=AC2&&(Px!=Py||Px!=-Py))
printf("Point is in the rectangle.");
	return 0; }