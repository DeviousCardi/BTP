#include <stdio.h>
int main() {
	int a,b,c,sum,prod;
	float avg;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum=a+b+c;
    prod=a*b*c;
    avg=(a+b+c)/3;
    printf("%d\n%d\n%0.3f",sum,prod,avg);
	return 0; }