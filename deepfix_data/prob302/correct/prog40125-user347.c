#include <stdio.h>
int main() {
float ax,ay,cx,cy,px,py;
scanf("%f,%f",&ax,&ay);
scanf("%f,%f",&cx,&cy);
scanf("%f,%f",&px,&py);
printf("%f %f %f",ax,px,cx);
if((((ax==px)||(cx==px))&&((ay<=py)||(cy<=py)))||(((ay==py)||(cy==py))&&((ax<=px)||(cx<=py))))
printf("Point is on the rectangle.");
else if((((ax<px)&&(cx<px))||((ax>px)&&(cx>px)))||(((ay<py)&&(cy<py))||((ay>py)&&(cy>py))))
printf("Point is outside the rectangle.");
else
printf("Point is inside the rectangle.");
return 0; }