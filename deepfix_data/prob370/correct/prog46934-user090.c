#include<stdio.h>
int main()
{ float a,b,c ;
  scanf("%f%f%f",&a,&b,&c);
  if(c>=a+b||a>=c+b||b>=c+a) {
      printf("INVALID"); }
  else if(a*a+b*b==c*c) {
      printf("RIGHT"); }
       else if(a*a+b*b>c*c) {
           printf("ACUTE"); }
            else {
                printf("OBTUSE"); }
    return 0; }