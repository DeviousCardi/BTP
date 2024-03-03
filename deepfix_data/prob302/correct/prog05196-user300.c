#include <stdio.h>
#include<math.h>
int main()
{   float ax,ay,cx,cy,px,py;
    scanf("%f%f\n%f%f\n%f%f",&ax,&ay,&cx,&cy,&px,&py);
if((abs(px)<abs(ax)||abs(px)<abs(cx))&&(abs(py)<abs(ay)||abs(py)<abs(cy)))  printf("Point is inside the rectangle.");
if((abs(px)>abs(ax)||abs(px)>abs(cx))&&(abs(py)>abs(ay)||abs(py)>abs(cy)))  printf("Point is outside the rectangle.");
else printf("Point is on the rectangle.");
	return 0; }