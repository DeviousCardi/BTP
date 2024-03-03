#include <stdio.h>
int main()
{float h1,h2,w,b;
char o;
scanf ("%f",&h1);
scanf ("%f",&w);
h2=h1/100;
b=((w/h2)/h2);
printf("%0.2f",(h2));
printf(" m, ");
printf("%0.2f",w);
printf(" kg: BMI");
printf("%0.2f",b);
if(b<18.5)
o="you have normal weight"
	return 0; }