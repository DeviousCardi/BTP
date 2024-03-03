#include <stdio.h>
int main() {
    float ax,ay,px,py,cx,cy;
    int k,j,i;
    scanf("%f %f",&ax,&ay);
	scanf("%f %f",&cx,&cy);
	scanf("%f %f",&px,&py);
	k=0;
	j=0;
if(ax>cx) {
	    if(px>cx && px<ax)
	    k=1;
	    else if (px==ax || px==cx)
	    k=4; }
	else if (cx>ax) {
	    if(px>ax && px<cx)
	    k=1;
	    else if (px==ax || px==cx)
	    k=4; }
if(ay>cy) {
	    if(py>cy && py<ay)
	    j=1;
	    else if (py==ay || py==cy)
	    j=4; }
	else if (cy>ay) {
	    if(py>ay && py<cy)
	    j=1;
	    else if (py==ay || py==cy)
	    j=4; }
	i=k+j;
	if(i==2)
	printf("Point is inside the rectangle.");
	else if(i==5 || i==8)
	printf("Point is on the rectangle.");
	else if(i==0 || i==4)
	printf("Point is outside the rectangle.");
	return 0; }