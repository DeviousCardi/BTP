#include <stdio.h>
int main() {
    float xa,ya,xc,yc,xp,yp;
    scanf("%f%f%f%f%f%f",&xa,&ya,&xc,&yc,&xp,&yp);
    if((xa<xp&&xp<xc)&&(ya<yp)&&(yp<yc)) {
        printf("Point is inside the rectangle."); }
    else if(((yp>=ya)&&(yp<=yc)&&(xp==xa))||((yp>=ya)&&(yp<=yc)&&(xp==xc))||((xp>=xa)&&(xp<=xc)&&(yp==yc))||((xp>=xa)&&(xp<=xc)&&(yp==ya))) {
        printf("Point is on the rectangle.") }
    else {
        printf("Point is outside the rectangle.") }
	return 0; }