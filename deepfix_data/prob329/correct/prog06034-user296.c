#include <stdio.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a+c>b) {
if((a*a+c*c)==(b*b))
{printf("Right Triangle"); }
else
{printf("Not Right Triangle"); } }
else
{printf("Cannot Form a Triangle"); }
return 0; }