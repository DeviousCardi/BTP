#include <stdio.h>
int main()
{float height,weight,BMI;
 scanf("%f%f",&height,&weight);
 height=(height/100);
 BMI=(weight)/(height*height);
 printf("%.2f m, %.2f kg:\n",height,weight);
 if(BMI<18.5){
	printf("BMI = %.2f\n",BMI);
	printf("You have low weight"); }
  else if(18.5<BMI&&BMI<25)
   { printf("BMI = %.2f\n",BMI);
    printf("You have normal weight");}
  else if(25<=BMI&&BMI<30)
{printf("BMI = %.2f\n",BMI);
printf("Obesity (1st-degree)");}
  else if(30<=BMI&&BMI<35)
{ printf("BMI = %.2f\n",BMI);
 printf("Obesity(2nd-degree)");}
  else if(35<=BMI&&BMI<40)
 {printf("BMI = %.2f\n",BMI);
 printf("Obesity(3rd-degree)");}
  else if(BMI>=40)
{ printf("BMI = %.2f\n",BMI);
 printf("Obesity(4th-degree)");}
	return 0; }