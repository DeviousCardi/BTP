#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a+b<c||b+c<a||c+a<b)
{printf ("INVALID");}
else if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
{printf ("RIGHT");}
  else if (a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
    {printf ("OBTUSE");}
      else
    {printf ("ACUTE");}
    return 0; }