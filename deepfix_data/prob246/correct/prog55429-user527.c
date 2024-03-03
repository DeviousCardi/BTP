#include <stdio.h>
int main() {
	int a,b,c,sum,prod;
	float avg;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum=a+b+c;
    prod=a*b*c;
    printf("%d\n%d\n%.3f",sum,prod,(a+b+c)/3);
	return 0; }