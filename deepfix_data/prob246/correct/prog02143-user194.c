#include <stdio.h>
int main() {
	int a,b,c,sum,prod;
	float avg;
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	prod=a*b*c;
	avg=sum/3;
	printf("sum=%d\n",sum);
	printf("product=%d\n",prod);
	printf("average=%.3f\n",avg);
	return 0; }