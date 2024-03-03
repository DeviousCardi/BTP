#include<stdio.h>
int main()
{ int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("enter the sides of a triangle:%d %d %d",a,b,c);
  if(a>=b)
  {if(a>=c) {
    if(b>=c)
    i=a;j=b;k=c;
   else
   i=a;j=c;k=b; } }
   else
   {if(b>=c)
    {if(c>=a)
      i=b;j=c;k=a
     else
      i=b;j=a;k=c; } }
  if((a+b)>c) {
    if(a*a + b*b != c*c)
    {if(a*a+b*b>c*c)
     printf("\NACUTE");
     else
     printf("\nOBTUSE"); }
    else
    printf("\nRIGHT"); }
  else
  printf("\nINVALID");
    return 0; }