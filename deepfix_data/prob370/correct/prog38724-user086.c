#include<stdio.h>
int main()
{   int a,b,c;
scanf("%d\n%d\n%d\n",&a,&b,&c);
if((a<b+c)&&(b<a+c)&&(c<a+b)) {
    if(a*a>b*b+c*c||b*b>c*c+a*a||c*c>a*a+b*b)
printf("OBTUSE\n");
if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
printf("RIGHT\n");
if(a*a<b*b+c*c&&b*b<c*c+a*a&&c*c+a*a&&c*c<a*a+b*b)
{printf("ACUTE\n");} }
else
{printf("INVALID");}
    return 0; }