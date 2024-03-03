#include <stdio.h>
int main() {
int a,c,b;
scanf("%d%d%d",&a,&b,&c);
if((a+c>b)&&(a+b>c)&&(b+c>a)) {
 if((a*a+c*c)==(b*b)||(a*a+b*b==c*c)||(b*b+c*c==a*a))
{printf("Right Triangle"); }
else
{printf("Not Right Triangle"); } }
else
{printf("Cannot Form a Triangle"); }
return 0; }