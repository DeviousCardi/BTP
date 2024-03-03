#include<stdio.h>
int main()
{   int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
if  ((a+b)>c)
    {printf ("invalid"); }
    else { printf ("valid"); }
if
    ((a*a + b*b)>=(c*c))
    {printf ("acute"); }
    else {printf ("not acute"); }
if
    ((a*a + b*b)==(c*c))
    {printf ("right"); }
    else {printf ("not right"); }
if
    ((a*a + b*b)<=c*c)
    { printf ("obtuse"); }
    else {printf ("not obtuse"); }
 return (0); }