#include <stdio.h>
int main() {
	float x1,x2,x3,y1,y2,y3;
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    float cx=(x1+x2)/2;
    float cy=(y1+y2)/2;
	float d=(cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
	float d1=(cx-x3)*(cx-x3)+(cy-y3)*(cy-y3);
	float d2=(x2-x3)*(x2-x3)+(y1-y3)*(y2-y3);
	float a=(x2-x1)*(x2-x1)/4;
	float b=(y2-y1)*(y2-y1)/4;
	if(d1<a&&d1<b) {
	    printf("Point is inside the rectangle."); }
	else if(d1<a||d1<b) {
	    if(x3>x1||x3<x2||y3>y1||y3<y2)
	    printf("Point is inside the rectangle."); }
	else if(d1==a||d1==b||d1==d) {
	    if(x3==x1||x3==x2||y3==y1||y3==y2)
	    printf("Point is on the rectangle."); }
	else {
	    printf("Point is outside the rectangle."); }
	return 0; }