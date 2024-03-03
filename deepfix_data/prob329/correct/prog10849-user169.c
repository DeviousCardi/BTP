#include <stdio.h>
#include <stdlib.h>
int main() {
   int a,b,c;
   int g,m,l;
   scanf("%d %d %d",&a,&b,&c);
if(a>=b && b>=c)
 { g=a;
   m=b;
   l=c; }
else if (a>=c && c>=b)
 { g=a;
   m=c;
   l=b; }
else if (b>=a && a>=c)
{  g=b;
   m=a;
   l=c; }
else if (b>=c && c>=a)
{  g=b;
   m=c;
   l=a; }
else if (c>=a && a>=b)
{ g=c;
   m=a;
   l=b; }
 else
 { g=c;
   m=b;
   l=a; }
if (m+l-g <= 0)
printf("Cannot form a Triangle");
else if (m+l-g>0) {
    if(m*m+l*l-g*g==0)
    printf("Right Triangle");
    else
    printf("Not Right Triangle"); }
 return 0; }