#include <stdio.h>
int main() {
    float x1,y1,x2,y2,x3,y3,ymax,ymin,xmax,xmin;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    if(y2>y1) {
         ymax=y2;
         ymin=y1; }
    else {
        ymax=y1;
        ymin=y2; }
    if(x2>x1) {
        xmin=x1;
        xmax=x2; }
    else {
        xmin=x2;
        xmax=x1; }
    if(x3>xmin&&x3<xmax&&y3<ymax&&y3>ymin)
    printf("Point is inside the rectangle.");
    else
    if((x3==xmin||x3==xmax)&&y3>=ymin&&y3<=ymax)
         printf("Point is on the rectangle.");
    else if((y3==ymin||y3==ymax)&&x3>=xmin&&x3<=xmax)
         printf("Point is on the rectangle.");
     else
     printf("Point is outside the rectangle.");
     return 0; }