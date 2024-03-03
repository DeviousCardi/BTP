#include <stdio.h>
#include <stdlib.h>
int main() {
int a=3;
int b=5;
int c=4;
scanf("%d,%d,%d",a,b,c);
if((a+b>c)&&(b+c>a)&&(c+a>b)) {
if((b*b+c*c==a*a)||(a*a+c*c==b*b)||(b*b+a*a==c*c))
{printf("Right Triangle");}
else
{printf("Not Right Triangle");} }
else
{printf("Cannot form a Triangle");}
return 0; }