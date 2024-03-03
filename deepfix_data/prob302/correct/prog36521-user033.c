#include <stdio.h>
int main() {
    float ax, ay, cx, cy, px, py;
    scanf("%f %f\n%f %f\n%f %f", &ax, &ay, &cx, &cy, &px, &py);
    if((((px-ax>0)&&(px-cx<0))||((px-ax<0)&&(px-cx>0)))&&(((py-ay>0)&&(py-cy<0))||((py-ay<0)&&(py-cy>0))))  {
        printf("Point is inside the rectangle."); }
    else if ( ((px==ax)&&(((py>=ay)&&(py<=cy))||((py<=ay)&&(py>=cy)))) || ((px==cx)&&(((py>=ay)&&(py<=cy))||((py<=ay)&&(py>=cy)))) || ((py==ay)&&(((px>=ax)&&(px<=cx))||((px<=ax)&&(px>=cx)))) || ((py==cy)&&(((px>=ax)&&(px<=cx))||((px<=ax)&&(px>=cx))) )) {
        printf("Point is on rectangle."); }
    else {
        printf("Point is outside the rectange."); }
	return 0; }