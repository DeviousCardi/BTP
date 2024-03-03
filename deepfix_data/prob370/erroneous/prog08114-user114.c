#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<(b+c)&&b<(a+c)&&c<(a+b))
{if(a*a+b*b>c*c&&b*b+c*c>a*a&&c*c+a*a>b*b)
{printf("ACUTE");}
else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {printf("RIGHT");}
    else {printf("OBTUSE");} }
else {printf("INVALID");
return 0;}