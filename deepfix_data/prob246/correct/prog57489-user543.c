#include <stdio.h>
int main() {int a,b,c,sum,pr;
float avg;
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("%d\n",sum);
pr=a*b*c;
printf("%d\n",pr);
avg=sum/3.0 ;
printf(" %0.3f",avg);
	return 0; }