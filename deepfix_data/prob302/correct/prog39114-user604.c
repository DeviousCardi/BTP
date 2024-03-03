#include <stdio.h>
int main()
{float Ax,Ay,Bx,By,Px,Py;
    scanf("%f%f",&Ax,&Ay);
    scanf("%f%f",&Bx,&By);
    scanf("%f%f",&Px,&Py);
 if ((((Py=Ay)||(Py=By))&&((Ax<=Px&&Px<=Bx)||(Bx<=Px&&Px<=Ax)))&&(((Px=Ax)||(Px=Bx))&&((Ay<=Py&&Py<=By)||(By<=Py&&Py<=By))))
    printf("Point is on the rectangle.");
 else if (((Ax<Px<Bx)||(Bx<Px<Ax))&&((Ay<Py<By)||(By<Py<Ay)))
    printf("Point is inside the rectangle.");
 else ("Point is outside the rectangle.");
	return 0; }