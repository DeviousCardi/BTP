#include <stdio.h>
int main() {
float a,b,c;
scanf("%f%f",&a,&b);
a=a/100;
c=b/(a*a);
printf("%.2f m, %.2f kg : BMI=%.2f\n",a,b,c);
if(c<18.5) printf("You have low weight\n");
else if(c>=18.5&&c<25) printf("You have normal weight\n");
else if(c>=25&&c<30) printf("Obesity \(1st-degree)\n");
else if (c>=30&&c<35)printf("Obesity (2nd-degree)\n");
else if (c>=35&&c<40)printf("Obesity (3rd-degree)\n");
else if (c>=40)printf("Obesity (4th-degree)");
	return 0; }