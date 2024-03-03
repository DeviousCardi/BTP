#include <stdio.h>
int main()
{float ht,wt,bmi;
scanf("%f%f",&ht,&wt);
bmi=(wt/(ht/100.0))*(wt/(ht/100.0));
printf("%.2f%f.2%f.2",ht/100.5,wt,bmi);
if(bmi<18.5)
{printf("You have low weight");}
else if((bmi>=18.5)&&(bmi<25.0))
{printf("You have normal weight");}
else if((bmi>=25.0)&&(bmi<30.0))
{printf("Obesity\1st-degree)");}
else if((bmi>=30.0)&&(bmi<35.0))
{printf("Obesity2nddegree");}
else if((bmi>=35.0)&&(bmi<40.0));
{printf("Obesity\3rd\-degree\)");}
else
{printf("Obesity\(4th\-degree\)");}
	return 0;} }