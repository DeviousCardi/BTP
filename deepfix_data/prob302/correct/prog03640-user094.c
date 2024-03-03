#include <stdio.h>
#include<math.h>
int main()
{  float a,a1,b,b1,c,c1;
 scanf("%f%f\n%f%f\n%f%f",&a,&a1,&b,&b1,&c,&c1);
  float x1,y1,x2,y2;
  if(a>b)
  {x2=a;
  x1=b;}
  else
  {x2=b;
  x1=a;}
  if(a1>b1)
  {y1=b1;
  y2=a1; }
  else
  {y1=a1;
  y2=b1; }
  if((c>x1&&c<x2)&&(c1>y1&&c1<y2))
  printf("Point is inside the rectangle.");
  else if((c==x1||c==x2)&&(c1>=y1&&c1<=y2))
  printf("Point is on the rectangle");
   else if((c1==y1||c1==y2)&&(c>=x1&&c<=x2))
   printf("Point is on the rectangle.");
   else
   printf("Point is outside the rectangle.");
  return 0; }