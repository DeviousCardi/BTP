#include <stdio.h>
#include<math.h>
int main() {
	float ax,ay,cx,cy,px,py,a,b;
	scanf("%f%f%f%f%f%f",&ax,&ay,&cx,&cy,&px,&py);
	if(ay>cy){
	    a=cy;
	    cy=ay;
	    ay=a; }
	if(cx<ax){
	    b=ax;
	    cx=ax;
	    ax=b; }
	if(px<cx&&px>ax&&py<cy&&py>ay){
	    printf("Point is inside the rectangle."); }
	else
	if(px>cx&&px<ax&&py<cy&&py>ay){
	    printf("Point is outside the rectangle."); }
	else{
	    printf("Point is on the rectangle.");}
	return 0; }