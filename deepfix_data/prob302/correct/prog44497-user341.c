#include <stdio.h>
int main() {
	float Ax, Ay, Cx, Cy, Px, Py;
	scanf("%f %f", &Ax, &Ay);
	scanf("%f %f", &Cx, &Cy);
	scanf("%f %f", &Px, &Py);
	if(((Ax>Px&&Px>Cx)||(Cx>Px&&Px>Ax)) && ((Ay>Py&&Py>Cy)||(Cy>Py&&Py>Ay)))
	    printf("Point is inside the rectangle.");
	else if(((Px>Ax&&Px>Cx)||(Px<Ax&&Px<Cx)) || ((Py>Ay&&Py>Cy)||(Py<Cy&&Py<Ay)))
	    printf("Point is outside the rectangle.");
    else
        printf("Point is on the rectangle.");
	return 0; }