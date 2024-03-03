#include <stdio.h>
int main() {
	int a,b,c,sum,pdt;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	pdt=a*b*c;
	avg=((a+b+c)/3);
	printf("%d \n %d \n %.3f \n",sum,pdt,avg);
	return 0; }