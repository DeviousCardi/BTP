#include <stdio.h>
#include <math.h>
int main() {
	float x1,x2,x3,y1,y2,y3;
	scanf("%f %f\n",&x1,&y1);
	scanf("%f %f\n",&x2,&y2);
	scanf("%f %f\n",&x3,&y3);
	float gx,sx,gy,sy;
	if(x1>x2) {
	    gx=x1;
	    sx=x2; }
	else {
	    gx=x2;
	    sx=x1; }
	if(y1>y2) {
	    gy=y1;
	    sy=y2; }
	else {
	    gy=y2;
	    sy=y1; }
	if(x3>sx&&x3<gx&&y3>sy&&y3<gy)
	    printf("Point is inside the rectangle.");
	else {
	    if((x3>=sx&&x3<=gx&&(y3==y1||y3==y2))||(y3>=sy&&y3<gy&&(x3==x2||x3==x1))||((x3==x1&&y3==y1)||(x3==x2&&y3==y2))) {
	        printf("Point is on the rectangle."); }
	    else {
	        printf("Point is outside the rectangle."); } }
	return 0; }