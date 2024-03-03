#include <stdio.h>
int main() {
	float ax,ay,cx,cy,px,py;
	scanf("%f %f %f %f %f %f",&ax,&ay,&cx,&cy,&px,&py);
	if(((px>=ax)&&(px<=cx))&&((py>=ay)&&(py<=cy))){
	    if(((px>ax)&&(px<cx))&&((py>ay)&&(py<cy)))
	        printf("Point is inside the rectangle.");
	    if(((px>=ax)&&(px<=cx))&&((py>=ay)&&(py<=cy)))
	    printf("Point is on the rectangle."); }
	    else{
	printf("Point is outside the rectangle."); }
	return 0; }