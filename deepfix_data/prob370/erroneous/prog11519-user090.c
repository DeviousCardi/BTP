#include<stdio.h>
int main()
{ float a,b,c ;
  scanf("%f%f%f",&a,&b,&c);
  if(a*a+b*b>c*c) {
      printf("ACUTE"); }
  if(a*a+b*b==c*c) {
      printf("RIGHT"); }
  if(a*a+b*b<c*c) {
      printf("OBTUSE") }
  else {
      printf("INVALID") }
    return 0; }