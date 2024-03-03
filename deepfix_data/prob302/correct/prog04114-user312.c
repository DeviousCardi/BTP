#include <stdio.h>
int main() {
    float ax,ay,cx,cy,px,py;
    scanf("%f%f%f%f%f%f",&ax,&ay,&cx,&cy,&px,&py);
    if (((ax<px&&px<cx)&&(ay<py&&py<cy))||((ax<px&&px<cx)&&(cy<py&&py<ay))||((cx<px&&px<ax)&&(ay<py&&py<cy))||((cx<px&&px<ax)&&(cy<py&&py<ay)))
    printf("Point is inside the rectangle.");
	return 0; }