#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a+b<c||b+c<a||c+a<b)
{printf ("INVALID");}
else if (a*a+b*b==c*c)
{printf ("RIGHT");}
    else if (a*a+b*b>c*c)
    {printf ("ACUTE");}
    else if (a*a+b*b<c*c)
    {printf ("OBTUSE");}
    return 0; }