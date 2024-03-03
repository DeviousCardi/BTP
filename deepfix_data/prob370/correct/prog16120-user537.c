#include<stdio.h>
int main()
{ int a,b,c,i,j,k;
  scanf("%d %d %d",&a,&b,&c);
  printf("enter the sides of a triangle:%d %d %d",a,b,c);
  if(a>=b)
  {if(a>=c)
   k=a,i=b,j=c;
   else
   k=c,i=b,j=a; }
   else
   {if(b>=c)
    k=b,i=a,j=c;
    else
    k=c,i=a,j=b; }
  if((i+j)>k) {
    if(i*i + j*j != k*k)
    {if(i*i+j*j>k*k)
     printf("\nACUTE");
     else
     printf("\nOBTUSE"); }
    else
    printf("\nRIGHT"); }
  else
  printf("\nINVALID");
    return 0; }