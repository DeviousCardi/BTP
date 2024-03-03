#include<stdio.h>
int main()
{ int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("enter the sides of a triangle:%d %d %d",a,b,c);
  if((a+b)>c) {
    if(a*a + b*b > c*c)
    printf("\nACUTE");
    else
    printf("\nOBTUSE"); }
  else
  printf("\nINVALID");
    return 0; }