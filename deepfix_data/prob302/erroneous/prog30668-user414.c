#include<stdio.h>
int main() {
    float ax,ay,cx,cy,px,py;
    scanf("%f %f",&ax,&ay);
    scanf("%f %f",&cx,&cy);
    scanf("%f %f",&px,&py);
    if((((px-ax)*(px-bx))>0)||((py-ay)*(py-by))>0) {
        printf("Point is outside the rectangle."); }
    if((((px-ax)*(px-bx))<0)&&((py-ay)*(py-by))<0) {
        printf("Point is inside the rectangle."); }
    else
    printf("Point is on the rectangle.");
    return 0; }