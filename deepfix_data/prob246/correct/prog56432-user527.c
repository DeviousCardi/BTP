#include <stdio.h>
int main() {
	float a,b,c,sum,prod;
	float avg;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    sum=a+b+c;
    prod=a*b*c;
    avg=(a+b+c)/3;
    printf("%f\n%f\n%.3f",sum,prod,avg);
	return 0; }