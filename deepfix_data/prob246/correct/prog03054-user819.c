#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum = a+b+c;
	int avg = (a+b+c)/3;
	float product = (float)a*b*c;
	printf("\nTHE SUM IS : %d",sum);
	printf("\nTHE PRODUCT IS : %4f",product);
	printf("\nTHE AVERAGE IS : %d",avg);
	return 0; }