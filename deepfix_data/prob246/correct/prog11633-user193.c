#include <stdio.h>
int main() {
	int x,y,z;
	int sum;
	int product;
	float avg;
	scanf("%d%d%d",&x,&y,&z);
	sum = x+y+z;
	product =x*y*z;
	avg =sum/3.0;
	printf("%d\n%d\n%.3f",sum,product,avg);
	return 0; }