#include <stdio.h>
int main() {
int a,b,c,p,s;
float avg;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
p=a*b*c;
s=a+b+c;
avg=s/3.0;
printf("%d\n%d\n%.3f",s,p,avg);
	return 0; }