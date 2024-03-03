#include <stdio.h>
int main()
{ float x1,y1,x2,y2,px,py,temp;
scanf("%f %f %f %f %f %f ",&x1,&y1,&x2,&y2,&px,&py);
if(x1<x2)
{temp=x1;
x1=x2;
x2=temp;}
if(y1<y2)
{temp=y1;
y1=y2;
y2=temp;}
if ((px==x1||px==x2)&& (py>=y2&&py<=y1))
printf("Point is on the rectangle.");
else ((py==y1||py==y2)&& (px>=x2&&px<=x1))
printf("Point is on the rectangle.");
if ((px>x2&&px<x1)&&(py>y2&&py<y1))
printf("Point is inside the rectangle.");
if ((px<x2||px>x1)&&(py<y2||py>y1))
printf("Point is outside the rectangle.");
	return 0; }