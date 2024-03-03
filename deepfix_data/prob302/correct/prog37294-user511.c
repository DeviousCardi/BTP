#include <stdio.h>
int main() {
	float ax,ay,cx,cy,px,py;
	scanf("%f%f",&ax,&ay);
	scanf("%f%f",&cx,&cy);
	scanf("%f%f",&px,&py);
	if(ax>cx) {
	       ax=ax+cx;
	       cx=ax-cx;
	       ax=ax-cx; }
	if(ay>cy) {
	       ay=ay+cy;
	       cy=ay-cy;
	       ay=ay-cy; }
	if(ax<cx && ay<cy) {
	   if(ax<px && px<cx) {
	       if(ay<py && py<cy)
	                { printf("Point is inside the rectangle.");}
	       if((ay<py && py>cy) || (ay>py && py<cy) || (ay>py && py>cy))
	                { printf("Point is outside the rectangle.");}
	       if(ay==py || py==cy)
	                { printf("Point is on the rectangle.");} }
	   if(ax>px || px>cx) {
	            printf("Point is outside the rectangle."); } }
	return 0; }