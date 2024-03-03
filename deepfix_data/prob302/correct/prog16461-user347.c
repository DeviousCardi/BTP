#include <stdio.h>
int main() {
float ax,ay,cx,cy,px,py;
scanf("%f,%f",&ax,&ay);
scanf("%f,%f",&cx,&cy);
scanf("%f,%f",&px,&py);
if(((ax=px)||(cx=px))&&((ay=py)||(cy=py)))
printf("Point is on the rectangle.");
else if(((ax<=px&&px<=cx)||(cx<=px&&px<=ax))&&((ay<=py&&py<=cy)||(cy<=py&&py<=ay)))
printf("Point is inside the rectangle.");
else
printf("Point is outside the rectangle.");
return 0; }