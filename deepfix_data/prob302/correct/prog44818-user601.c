#include <stdio.h>
int main() {
float x1,x2,x3,y1,y2,y3,c,d;
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
if(x1>x2) {
    x2=x1;
    c=x2;
    x1=c; }
if(y1>y2) {
    y2=y1;
    d=y2;
    y1=d; }
if((x3>x1&&x3<x2)&&(y3<y2&&y3>y1)) {
    printf("Point is inside the rectangle. "); }
else if((x3>x2)||(x3<x1)||(y3>y2)||(y3<y1)) {
    printf("Point is outside the rectangle. "); }
else if((x3==x1&&(y3>=y1&&y3<=y2))||(x3==x2&&(y3>=y1&&y3<=y2))||(y3==y1&&(x3>=x1&&x3<=x2))||(y3==y2&&(x3>=x1&&x3<=x2))) {
    printf("Point is on the rectangle. "); }
	return (0); }