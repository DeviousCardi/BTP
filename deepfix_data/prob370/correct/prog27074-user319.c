#include<stdio.h>
int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
  printf("RIGHT");
  if (a*a+b*b>c*c||a*a+c*c>b*b||b*b+c*c>a*a)
  printf("OBTUSE");
  if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
  printf("ACUTE");
  if(a+b<c||a+c<b||b+c<a)
  printf("INVALID");
    return 0; }