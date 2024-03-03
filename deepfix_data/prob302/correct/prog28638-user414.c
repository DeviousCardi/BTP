#include<stdio.h>
int main() {
    float ax,cx,px,ay,cy,py;
    scanf("%f %f",&ax,&ay);
    scanf("%f %f",&cx,&cy);
    scanf("%f %f",&px,&py);
    if(((ax<px)&&(px<cx))||((cx<px)&&(px<ax))) {
        if(((ay<py)&&(py<cy))||((cy<py)&&(py<ay)))
        printf("Point is inside the rectangle."); }
    return 0; }