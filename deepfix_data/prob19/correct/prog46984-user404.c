#include <stdio.h>
int main() {
    float ht,wt,bmi;
    scanf("%f%f",&ht,&wt);
	ht=ht/100;
	bmi=wt/(ht*ht);
	if(bmi<18.5) {
	    printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	    printf("You have low weight"); }
	if(bmi>=18.5&&bmi<25) {
	printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	printf("You have normal weight"); }
	if(bmi>=25&&bmi<30) {
	    printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	    printf("Obesity (1st-degree)"); }
	if(bmi>=30&&bmi<35) {
	    printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	    printf("Obesity (2nd-degree)"); }
	if(bmi>=35&&bmi<40) {
	    printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	    printf("Obesity (3rd-degree)"); }
	if(bmi>=40)
	 {   printf("%.2f m, %.2f kg: BMI = %.2f\n",ht,wt,bmi);
	    printf("Obesity (4th-degree)"); }
	return 0; }