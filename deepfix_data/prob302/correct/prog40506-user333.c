#include <stdio.h>
int main() {
	float x1,x2,x3,max,mix;
	float y1,y2,y3,may,miy;
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	scanf("%f %f",&x3,&y3); {
    if(x2>x1) {
             max=x2;
             mix=x1; }
         else {
               max=x1;
               mix=x2; }
        if(y2>y1) {
             may=y2;
             miy=y1; }
         else {
               may=y1;
               miy=y2; }
        if((x3<max && x3>mix)&&(y3<may && y3>miy))
            printf("Point is inside the rectangle.");
        else
            if(((x3<max && x3>mix)&&(y3==may || y3==miy))||((y3<may && y3>miy)&&(x3==max || x3==mix)))
            printf("Point is on the rectangle");
            else
               printf("Point is outside the rectangle."); }
	return 0; }