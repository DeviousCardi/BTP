#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2,x,y1,y2,y,temp;
    scanf("%f %f\n",&x1,&y1);
    scanf("%f %f\n",&x2,&y2);
    scanf("%f %f\n",&x,&y);
    x1=(x1<0)?-x1:x1;
    y1=(y1<0)?-y1:y1;
    x2=(x2<0)?-x2:x2;
    y2=(y2<0)?-y2:y2;
    x=(x<0)?-x:x;
    y=(x<0)?-y:y;
    if(x2>x1) {
        temp=x2;
        x2=x1;
        x1=temp; }
    if(y2>y1) {
        temp=y2;
        y2=y1;
        y1=temp; }
    if((x==x1||x==x2)&&(y>=y1)&&(y<=y2))
    printf("Point is on the rectangle.");
    else if((y==y1||y==y2)&&(x>=x1)&&(x<=x2))
    printf("Point is on the rectangle.");
    else if(((x>x1)&&(x<x2))&&((y>y1)&&(y<y2)))
    printf("Point is inside the rectangle.");
    else(x>x2||y>y2)
    printf("Point is outside the rectangle.");
	return 0; }