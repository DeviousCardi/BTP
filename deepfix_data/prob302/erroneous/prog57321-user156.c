#include <stdio.h>
int main() {
    float Ax,Ay;
    float Px,Py;
    float Cx,Cy;
    scanf("%f%f\n",&Ax,&Ay);
    scanf("%f%f\n",&Cx,&Cy);
    scanf("%f%f",&Px,&Py);
    if((Px>Cx&&Px>Ax)||(Px<Cx&&Px<Ax)||(Py>Cy&&Py>Ay)||(Py<Cy&&Py<Ay))
    printf("Point is outside the rectangle.");
    else if(((Px==Ax||Px==Cx)&&((Py<=Ay)&&(Py>=Cy)||(Py<=Cy)&&(Py>=Ay)))||((Py==Ay||Py==Cy)&&((Px<=Ax)&&(Px>=Cx)||(Px<=Cx)&&(Px>=Ax))))
    printf("Point is on the rectangle.");
    else
    printf("Point is inside the rectangle.")
	return 0; }