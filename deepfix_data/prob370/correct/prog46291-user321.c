#include<stdio.h>
int main()
{   int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
if  ((a+b)<=c||(a+c<=b)||(b+c<=a))
    {printf ("INVALID"); }
else if
    ((a*a + b*b)<(c*c))
    {printf ("OBTUSE"); }
else if
    ((a*a + b*b)==(c*c))
    {printf ("RIGHT"); }
else if
    (((a*a + b*b)>c*c)||((a*a + c*c)>b*b)||((b*b+c*c)>a*a))
    { printf ("ACUTE"); }
 return (0); }