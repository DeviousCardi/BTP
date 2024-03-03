#include <stdio.h>
int main()
{float h,w,b;
  scanf("%f%f",&h,&w);
  printf("%0.2f/100 m, %0.2fkg:",h,w);
  b=w/(h*h);
  printf("BMI=%0.2f \n",b);
  if(b<18.5)
    printf("You are low weight");
  else if(b>=18.5&&b<25)
    printf("You have normal weight");
  else if(b>=25&&b<30)
    printf("Obesity (1st-degree)");
  else if(b>=30&&b<35)
    printf("Obesity (2nd-degree)");
  else if(b>=35&&b<40)
    printf("Obesity (3rd-degree)");
  else if(b>=40)
    printf("Obesity (4th-degree)");
	return 0; }