#include <stdio.h>
int main() {
	int a,b,c,s,p;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b+c;
	p=a*b*c;
	avg=s/3.0;
	printf("%d\n%d\n",s,p);
	printf("%.3f",avg);
	return 0; }