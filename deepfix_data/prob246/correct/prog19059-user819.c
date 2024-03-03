#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum = a+b+c;
	float avg = (float)(a+b+c)/3;
	int product = a*b*c;
	printf("%d",sum);
	printf("\n%d",product);
	printf("\n%.3f",avg);
	return 0; }