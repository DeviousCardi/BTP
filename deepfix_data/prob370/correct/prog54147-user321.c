#include<stdio.h>
int main()
{   int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
if  ((a+b)>c)
    {printf ("invalid"); }
if
    ((a*a + b*b)>=(c*c))
    {printf ("acute"); }
if
    ((a*a + b*b)==(c*c))
    {printf ("right"); }
if
    ((a*a + b*b)<=c*c)
    { printf ("obtuse"); }
 return (0); }