#include <stdio.h>
int main() {
    float x1,y1,x2,y2,xp,yp,d1,d2;
    scanf("%f %f %f %f %f %f", &x1,&y1,&x2,&y2,&xp,&yp);
    if(x1>=x2) {
      d1 = x1;
      x1 = x2;
      x2 = d1; }
    if(y1>=y2) {
      d2 = y1;
      y1 = y2;
      y2 = d2; }
    if(((xp>x1)&&(xp<x2))&&((yp>y1)&&(yp<y2)))
    printf("Point is inside the rectangle.");
    else if(((xp==x1)&&((yp>=y1)&&(yp<=y2)))||
    ((xp==x2)&&((yp>=y1)&&(yp<=y2)))||
    ((yp==y1)&&((xp>x1)&&(xp<x2)))||
    ((yp==y2)&&((xp>x1)&&(xp<x2))))
    printf("Point is on the rectangle.");
    else
    printf("Point is outside the rectangle."); }