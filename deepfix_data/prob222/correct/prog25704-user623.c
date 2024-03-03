#include <stdio.h>
int main()
{ float a1,a2,b1,b2,c1,c2,x;
scanf("%f",&a1);
scanf("%f",&a2);
scanf("%f",&b1);
scanf("%f",&b2);
scanf("%f",&c1);
scanf("%f",&c2);
float a=((a1/50)*40 + (a2/100)*60);
float b= (b1/50)*40 + (b2/100)*60;
float c= (c1/50)*40 + (c2/100)*60;
if(((a>b)&&(a<c))||((a>c)&&(a<b)))
	x=a;
	else
	if(((b>c)&&(b<a))||((b>a)&&(b<c)))
	x=b;
	else
	if(((c>b)&&(c<a))||((c>a)&&(c<b)))
	x=c;
printf("%d,%d,%d",a,b,c);
	printf("%.2f",x);
	return 0; }