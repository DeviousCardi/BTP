#include <stdio.h>
#include<math.h>
int main() {
	float ax,ay,cx,cy,px,py,a,b,c,d;
	scanf("%f%f%f%f%f%f",&ax,&ay,&cx,&cy,&px,&py);
	if(ay>cy){
	    if(ax>cx){
	        a=cy;c=cx;
	    cy=ay;cx=ax;
	    ay=a;ax=c; }
	    else{
	        a=cy;
	    cy=ay;
	    ay=a; } }
	if(ay<cy){
	    if(ax>cx){
	        d=cx;
	    cx=ax;
	    ax=d;
	    }else{} }
	if(px<cx&&px>ax&&py<cy&&py>ay){
	    printf("Point is inside the rectangle."); }
	else
	if((px==cx||px==ax)&&(py==cy||py==ay)){
	    printf("Point is on the rectangle."); }
	else{
	    printf("Point is outside the rectangle.");}
	return 0; }