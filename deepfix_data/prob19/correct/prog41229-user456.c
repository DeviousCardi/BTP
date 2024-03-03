#include <stdio.h>
int main() {
    float h,w,bmi;
    scanf("%f%f",&h,&w);
    bmi=w/((h/100)*(h/100));
    if (bmi<18.5)
    {printf("%.2fm,\n%.2fkg:\nBMI=%.2f\n",h/100,w,bmi);
    printf("you have low weight");}
    else if (bmi>=18.5&&bmi<25)
    {printf("%.2fm, %.2fkg:BMI=%.2f\n",h/100,w,bmi);
    printf("you have normal weight");}
    else if (bmi>=25&&bmi<30)
    {printf("%.2fm%.2fkg:BMI=%.2f\n",h/100,w,bmi);
    printf("obesity(1st-degree)");}
    else if (bmi>=30&&bmi<35)
    {printf("%.2fm%.2fkg:BMI=%.2f\n",h/100,w,bmi);
    printf("obesity 2nd degree");}
    else if (bmi>=35&&bmi<40)
    {printf("%.2fm%.2fkg:BMI=%.2f\n",h/100,w,bmi);
    printf("obesity 3rd degree");}
    else if (bmi>=40)
    {printf("%.2fm%.2fkg:BMI=%.2f\n",h/100,w,bmi);
    printf("obesity 4th degree");}
	return 0; }