#include <stdio.h>
int main() {
    float h,w;
    scanf("%f %f",&h,&w);
    h=h/100;
  float b=w/(h*h);
    printf("%0.2f m, %0.2f kg:BMI = %.2f",h,w,b);
   if(b<18.5)
    printf("\nYou have low weight");
    else if(b>=18.5&&b<25)
    printf("\nYou have normal weight");
    else if(b>=25&&b<30)
    printf("\nObesity (1st-degree)");
    else if(b>=30&&b<35)
    printf("\nObesity (2nd-degree)");
    else if(b>=35&&b<40)
    printf("\nObesity (3rd-degree)");
    else if(b>=40)
    printf("\nObesity (4th-degree)");
	return 0; }