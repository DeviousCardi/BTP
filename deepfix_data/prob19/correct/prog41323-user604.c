#include <stdio.h>
int main()
{float h,w,b,a ;
  scanf("%f %f",&h,&w);
  a=h/100;
  printf("%0.2f m, %0.2f kg: ",a,w);
  b= w/(a*a);
  printf("BMI = %0.2f \n",b);
  if(b<18.5)
    printf("You are low weight");
  else if(b>=18.5&&b<25)
    printf("You have normal weight");
  else if(b>=25&&b<30)
    printf("Obesity  (1st-degree)");
  else if(b>=30&&b<35)
    printf("Obesity  (2nd-degree)");
  else if(b>=35&&b<40)
    printf("Obesity (3rd-degree)");
  else if(b>=40)
    printf("Obesity (4th-degree)");
	return 0; }