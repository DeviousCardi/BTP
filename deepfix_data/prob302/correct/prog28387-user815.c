#include <stdio.h>
int main() {
	float x1,y1,x2,y2,x3,y3,a1,a2,c1,c2;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	if(x2>x1) {
	    a1=x1;c1=x2; }
	else {
	    a1=x2;c1=x1; }
	if(y2>y1) {
	    a2=y1;c2=y2; }
	else {
	    a2=y2;c2=y1; }
	if(x3>a1&&x3<c1) {
	        if(y3>a2&&y3<c2) printf("Point is inside the rectangle.");
	        else if(y3==a2||y3==c2) printf("Point is on the rectangle.");
	        else printf("Point is outside the rectangle."); }
	else if(x3==a1||x3==c1) {
	        if(y3>=a2&&y3<=c2) printf("Point is on the rectangle.");
	        else printf("Point is outside the rectangle."); }
	else ;
	return 0; }