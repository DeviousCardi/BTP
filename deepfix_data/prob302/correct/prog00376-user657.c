#include <stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3;
scanf("%f %f\n",x1,y1);
scanf("%f %f\n",x2,y2);
scanf("%f %f\n",x3,y3);
if((x1==x3||x3==x2)&&(y1==y3)||(y3==y2)){
    printf("Point is on the rectangle.Point is on the rectangle."); }
	return 0; }