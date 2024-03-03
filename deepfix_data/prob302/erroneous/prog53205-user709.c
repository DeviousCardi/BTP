#include <stdio.h>
int main() {
    float Ax,Ay,Cx,Cy,Px,Py,Ox,Oy;
    scanf("%f%f\n%f%f\n%f%f\n",&Ax,&Ay,&Cx,&Cy,&Px,&Py);
    Ox= (Ax+Cx)/2;
    Oy=(Ay+Cy)/2;
    if(((Px-Ox)*(Px-Ox))<((Ax-Ox)*(Ax-Ox))&& ((Py-Oy)*(Py-Oy))<((Ay-Oy)*(Ay-Oy))||(((Px-Ox)*(Px-Ox))<((Cx-Ox)*(Cx-Ox))&& ((Py-Oy)*(Py-Oy))<((Cy-Oy)*(Cy-Oy)))
    printf("Point is inside the rectangle.");
   else if(((Px-Ox)*(Px-Ox))==((Ax-Ox)*(Ax-Ox))&& ((Py-Oy)*(Py-Oy))==((Ay-Oy)*(Ay-Oy)))
    printf("Point is on the rectangle.");
    else
    printf("Point is outside the rectangle.");
	return 0; }