#include <stdio.h>
int main() {
    float ht, ht1, wt;
    scanf("%f %f", &ht, &wt);
    float bmi;
    ht1=ht/100;
    bmi=(wt)/(ht1*ht1);
    printf("%.2f m, %.2f kg: BMI = %.2f\n", ht1, wt, bmi);
    if (bmi<18.5) printf("You have low weight");
    else if(bmi>=18.5 && bmi<25) printf("You have normal weight");
    else if(bmi>=25 && bmi<30) printf("Obesity (1st-degree)");
    else if(bmi>=30 && bmi<35) printf("Obesity (2nd-degree)");
    else if(bmi>=35 && bmi<40) printf("Obesity (3rd-degree)");
    else printf("\nObesity (4th-degree)");
	return 0; }