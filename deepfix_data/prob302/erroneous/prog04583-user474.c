#include <stdio.h>
int main() {
	float x1,y1,x2,y2,x3,y3;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x3,&y3);
	if(x1<x2) {
	    xmax=x2;
	    xmin=x1; }
	else {
	    xmax=x1;
	    xmin=x2; }
	if(y1<y2) {
	    ymax=y2;
	    ymin=y1; }
	else {
	    ymax=y1;
	    ymin=y2; }
	if(x3<xmax&&x3>xmin&&x3<ymax&&x3>ymin) {
	    printf("Point is inside the rectangle"); }
	else if(y3<ymin||y3>ymax||x3<xmin||x3>xmax) {
	    printf("Point is outside the rectangle"); }
	else {
	    printf("Point is on the rectangle"); } }
	return 0; }