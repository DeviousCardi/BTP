#include <stdio.h>
int main() {
	float ax,ay,cx,cy,px,py;
	scanf("%f %f\n",&ax,&ay);
	scanf("%f %f\n",&cx,&cy);
	scanf("%f %f\n",&px,&py);
	float gx,gy,lx,ly;
	if(ax>cx) {
	 gx=ax;
	 lx=cx; }
	else {
	    gx=cx;
	    lx=ax; }
	if(ay>cy) {
	    gy=ay;
	    ly=cy; }
	else {
	    gy=cy;
	    ly=ay; }
	if(px>lx&&px<gx&&py>ly&&py<gy)
	printf("Point is inside the rectangle.");
	else if(((px==lx||px==gx)&&py<=gy&&py>=ly)||((py==ly||py==gy)&&px<=gx&&px>=lx))
	printf("Point is on the rectangle.");
	else
	printf("Point is outside the rectangle.");
	return 0; }