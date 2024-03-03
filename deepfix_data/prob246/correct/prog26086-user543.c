#include <stdio.h>
int main() {int a,b,c,sum,pr;
float avg;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("sum=%d/n",sum);
pr=a*b*c;
printf(" product=%d",pr);
avg=sum/3.0 ;
printf("average value= %0.3f",avg);
	return 0; }