#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c ;
scanf("%d %d %d",&a,&b,&c);
if
{((a>=b)&&(a>=c))
{z=a;x=b;y=c;}
else if ((b>=a)&&(b>=c))
{z=b;x=a;y=c;}
else ((c>=b)&&(c>=a))
{z=c;x=a;y=b;}
if (x+y>z) {
    if (a*a+b*b>c*c)
    printf("acute triangle");
    else
    printf ("not acute triangle ");
}else
printf("cannot form a triangle"); }