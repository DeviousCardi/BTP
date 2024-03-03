#include <stdio.h>
int main() {
    float ht, wt;
    scanf("%f %f", &ht, &wt);
    float bmi;
    bmi=(wt*100*100)/(ht*ht);
    printf("%.2f m, %.2f kg: BMI = %.2f", ht/100, wt, bmi);
    if (bmi<18.5) printf("\nYou have low weight");
    else if(bmi>=18.5 && bmi<25) printf("\nYou have normal weight");
    else if(bmi>=25 && bmi<30) printf("\nObesity (1st-degree)");
    else if(bmi>=30 && bmi<40) printf("\nObesity (2nd-degree)");
    else if(bmi>=40) printf("Obesity (4th-degree)");
	return 0; }