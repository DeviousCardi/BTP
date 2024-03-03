#include<stdio.h>
int main()
{int a,b,c,temp;
scanf("%d %d %d",&a,&b,&c);
if(c<=a)
{temp=c;
c=a;
a=temp;}
if(c<=b)
{temp=c;
c=b;
b=temp;}
printf("%d %d %d",a,b,c);
if(a+b<=c)
printf("INVALID");
else if (a*a+b*b>c*c)
printf("ACUTE");
else if (a*a+b*b==c*c)
printf("RIGHT");
else
printf("OBTUSE");
    return 0; }