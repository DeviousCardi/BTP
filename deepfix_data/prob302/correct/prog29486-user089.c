#include <stdio.h>
#include <math.h>
float max(float a,float b) {
    float m;
    if(a>b)
    m=a;
    else
    m=b;
    return m; }
float min(float a,float b) {
    float min;
    if(a<b)
    min=a;
    else
    min=b;
    return min; }
int main() {
	float ax,ay,bx,by,px,py,xm,xmi,ym,ymi,Xm,Xmi,Ym,Ymi;
	scanf("%f%f",&ax,&ay);
	scanf("%f%f",&bx,&by);
	scanf("%f%f",&px,&py);
	xm=max(ax,bx);
	xmi=min(ax,bx);
	ym=max(ay,by);
	ymi=max(ay,by);
	if((((px==ax)||(px==bx))&&((py>ymi)&&(py<ym)))||(((py==ay)||(py==by))&&((px>xmi)&&(px<xm))))
	printf("Point is on the rectangle");
	else {
	    if(((px>xmi)&&(px<xm))&&((py>ymi)&&(py<ym)))
	    printf("Point is inside the rectangle");
	    else
	    printf("Point is outside the rectangle"); }
	return 0; }