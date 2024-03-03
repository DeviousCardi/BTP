#include <stdio.h>
int main() {
	float height,weight,bmi;
	scanf("%f",&height);
	scanf("%f",&weight);
	bmi=weight*10000/height/height;
	printf("\n%0.2f m, %0.2f kg: BMI = %0.2f\n",height/100,weight,bmi);
	if(bmi<18.50)
	  printf("You have low weight");
	else
	  if(bmi<25.00)
	     printf("You have normal weight");
	  else
	     if(bmi<30.00)
	        printf("Obesity (1st-degree)");
	     else
	        if(bmi<35)
	            printf("Obesity (2nd-degree)");
	        else
	           if(bmi<40)
	               printf("Obesity (3rd-degree)");
	           else
	               printf("Obesity (4th-degree)");
	return 0; }