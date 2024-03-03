#include<stdio.h>
int main() {
    float ax,cx,px,ay,cy,py;
    scanf("%f %f",&ax,&ay);
    scanf("%f %f",&cx,&cy);
    scanf("%f %f",&px,&py);
    if(((ax<px)&&(px<cx))||((cx<px)&&(px<ax))) {
        if(((ay<py)&&(py<cy))||((cy<py)&&(py<ay)))
        printf("Point is inside the rectangle."); }
    if((px==ax)&&(((cy<=py)&&(py<=ay))||((ay<=py)&&(py<=cy))))
    printf("Point is on the rectangle.");
    if((px==cx)&&(((cy<=py)&&(py<=ay))||((ay<=py)&&(py<=cy))))
    printf("Point is on the rectangle.");
    if((py==ay)&&(((cx<=px)&&(px<=ax))||((ax<=px)&&(px<=cx))))
    printf("Point is on the rectangle.");
    if((py==cy)&&(((cx<=px)&&(px<=ax))||((ax<=px)&&(px<=cx))))
    printf("Point is on the rectangle.");
    else
    printf("Point is outside the rectangle.");
    return 0; }