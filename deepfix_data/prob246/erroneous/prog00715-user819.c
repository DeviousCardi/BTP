#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum = a+b+c;
	float avg = float(a+b+c)/3;
	int product = a*b*c;
	printf("\nTHE SUM IS : %d",sum);
	printf("\nTHE PRODUCT IS : %d",product);
	printf("\nTHE AVERAGE IS : %.3f",avg);
	return 0; }