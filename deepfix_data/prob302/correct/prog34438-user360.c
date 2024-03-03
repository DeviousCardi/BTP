#include <stdio.h>
int main()
{   float ax,ay,cx,cy,px,py,xmin,xmax,ymin,ymax;
    scanf("%f%f",ax,ay);
	scanf("%f%f",cx,cy);
	scanf("%f%f",px,py);
    if(ax<cx) {
        xmin=ax;
        xmax=cx; }
    else {
        xmin=cx;
        xmax=ax; }
    if(ay<cy) {
        ymin=ay;
        ymax=cy; }
    else {
        ymin=cy;
        ymax=ay; }
    if(px>xmin&&px<xmax) {
        if(py==ymin||py==ymax)
         printf("Point is on the rectangle.");
        else if(py>ymin&&py<ymax)
         printf("Point is inside the rectangle.");
        else
         printf("Point is outside the rectangle."); }
    else {
        printf("Point is outside the rectangle."); }
	return 0; }