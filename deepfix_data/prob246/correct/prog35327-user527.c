#include <stdio.h>
int main() {
	int a,b,c,sum,prod;
	float avg;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum=a+b+c;
    prod=a*b*c;
    avg=sum/3;
    printf("\n%d\n%d\n%0.2f",sum,prod,avg);
	return 0; }