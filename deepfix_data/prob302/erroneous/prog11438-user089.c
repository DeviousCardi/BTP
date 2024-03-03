#include <stdio.h>
#include <math.h>
int main() {
	float ax,ay,bx,by,px,py,xm,xmi,ym,ymi;
	scanf("%f%f",&ax,&ay);
	scanf("%f%f",&bx,&by);
	scanf("%f%f",&px,&py);
	if(ax>bx) {
	xm=ax;
	xmi=bx; }
	else {
	xm=bx;
	xmi=ax; }
	if(ay>by) {
	    ym=ay;
	    ymi=by; }
	else {
	    ym=by;
	    ymi=ay; }
	if((((px==ax)||(px==bx))&&((py>ymi)&&(py<=ym)))||(((py==ay)||(py==by))&&((px=>xmi)&&(px<xm))))
	printf("Point is on the rectangle");
	else {
	    if(((px>xmi)&&(px<xm))&&((py>ymi)&&(py<ym)))
	    printf("Point is inside the rectangle");
	    else
	    printf("Point is outside the rectangle"); }
	return 0; }