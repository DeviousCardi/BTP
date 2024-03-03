#include<stdio.h>
int main()
{int a,b,c,t;
scanf("%d%d%d",&a,&b,&c);
if(b>c)
{t=c;
c=b;
b=t; }
if(a>c)
{t=c;
c=a;
a=t; }
if(a+b>c) {
if(a*a+b*b==c*c) {
    printf("RIGHT"); }
else if(a*a+b*b>c*c) {
    printf("ACUTE"); }
else{
    printf("OPTUSE"); } }
else{printf("INVALID");} }
return 0; } }