#include<stdio.h>
int main()
{ float a,b,c ;
  scanf("%f%f%f",&a,&b,&c);
  if(a*a+b*b>c*c&&(a+b>c||b+c>a||c+a>b)) {
      printf("ACUTE"); }
  if(a*a+b*b==c*c&&(a+b>c||b+c>a||c+a>b)) {
      printf("RIGHT"); }
  if(a*a+b*b<c*c&&(a+b>c||b+c>a||c+a>b)) {
      printf("OBTUSE"); }
  else {
      printf("INVALID"); }
    return 0; }