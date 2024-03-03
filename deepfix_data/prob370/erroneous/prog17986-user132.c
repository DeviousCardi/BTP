#include<stdio.h>
int main()
{int a,b,c,d,e,f,g,h,i;
scanf("%d%d%d",&a,&b,&c);
d=a+b;
e=b+c;
f=c+a;
g=a*a+b*b-c*c;
h=b*b+c*c-a*a;
i=c*c+a*a-b*b;
if(a<=0||b<=0||c<=0)
{printf("invalid");}
else
{if((d<=c)||(e<=a)||(f<=b))
{printf("INVALID");}
else
{if(g==0||h==0||i==0)
{printf("RIGHT");}
else
{if(g>0&&h>0&&i>0)
{printf("ACUTE")}
else
{printf("OBTUSE")}}}
    return 0; }