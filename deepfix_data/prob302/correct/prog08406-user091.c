#include <stdio.h>
int main()
{float x1,y1;
 float x2,y2;
 float x3,y3;
 scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
 if(((x3<x1&&x3<x2)||(x3>x1&&x3>x2))||((y3<y1&&y3<y2)||(y3>y1&&y3>y2))){printf("Point is outside the rectangle");}
 if((x3==x1||x3==x2)&&((y3<=y1&&y3>=y2)||(y3<=y2&&y3>=y1))){printf("point is on the rectangle");}
 if(((x3<x1&&x3>x2)||(x3>x1&&x3<x2))&&((y3<y1&&y3>y2)||(y3<y2&&y3>y1))){
     printf("point is inside the rectangle"); }
	return 0; }