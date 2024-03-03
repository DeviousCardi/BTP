#include <stdio.h>
int main() {
    float ht, wt;
    scanf("%f %f", &ht, &wt);
    float bmi;
    bmi=wt/(ht*ht*100);
    printf("%.2f m, %.2f kg: BMI = %.2f\n", ht, wt, bmi);
    if (bmi<18.5) printf("You have low wieght");
    else if(bmi>=18.5 && bmi<25) printf("You have normal wieght");
    else if(bmi>=25 && bmi<30) printf("Obesity (1st-degree)");
    else if(bmi>=30 && bmi<40) printf("Obesity (2nd-degree)");
    else printf("Obesity (4th-degree)");
	return 0; }