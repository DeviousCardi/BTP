#include <stdio.h>
int main() {
    float ht,wt,ht2,bmi;
    scanf("%f%f",&ht,&wt);
    ht2=(ht/100.0);
    printf("%.2fm,%.2fkg:",ht2,wt);
    bmi=((wt)/(ht2*ht2));
    printf("BMI=%.2f\n",bmi);
    if(bmi<18.5)
        { printf("You have low weight");}
    if(18.5<=bmi && bmi<25)
        { printf("You have normal weight");}
	if(25<=bmi && bmi<30)
        { printf("Obesity(1st-degree)");}
    if(30<=bmi && bmi<35)
        { printf("Obesity(2nd-degree)");}
    if(35<=bmi && bmi<40)
        { printf("Obesity(3rd-degree)");}
    if(bmi>=40)
        { printf("Obesity(4th-degree)");}
	return 0; }