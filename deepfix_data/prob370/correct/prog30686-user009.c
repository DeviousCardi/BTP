#include<stdio.h>
int main()
{int a,b,c,max,s1,s2,det;
scanf("%d %d %d", &a, &b, &c);
if(a>=b && a>=c)
   {max=a;
    s1=b;
    s2=c;}
else if(b>=a && b>=c)
   {max=b;
    s1=a;
    s2=c; }
else if(c>=a && c>=b)
    {max=c;
     s1=b;
     s2=a; }
det=s1*s1+s2*s2-max*max;
if(max>=s1+s2)
     printf("INVALID");
else
{    if(det>0)
        printf("ACUTE");
     else if(det==0)
        printf("RIGHT");
     else if(det<0)
        printf("OBTUSE"); }
    return 0; }