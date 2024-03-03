#include <stdio.h>
int main() {
    float Ax,Ay,Cx,Cy,Px,Py;
    scanf("%f %f\n",&Ax,&Ay);
    scanf("%f %f\n",&Cx,&Cy);
    scanf("%f %f",&Px,&Py);
        if(((Px<Cx)&&(Px>Ax))&&((Py>Ay)&&(Py<Cy))){
            printf("Point is inside the rectangle.");}
else if(((Px<Cx)&&(Px>Ax))&&((Py<Ay)&&(Py>Cy))){
 printf("Point is inside the rectangle.");}
else if(((Px>Cx)&&(Px<Ax))&&((Py<Ay)&&(Py>Cy))){
 printf("Point is inside the rectangle.");}
else if(((Px>Cx)&&(Px<Ax))&&((Py>Ay)&&(Py<Cy))){
 printf("Point is inside the rectangle.");}
 else {printf("Point is  outside  the rectangle.");}
	return 0; }