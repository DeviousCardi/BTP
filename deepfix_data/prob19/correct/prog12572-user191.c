#include <stdio.h>
int main()
{float h1,h2,w,b;
int o;
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
o=1;
else if(b<25)
o=2;
else if(b<30)
o=3;
else if(b<35)
o=4;
else if(b<40)
o=5;
else o=6;
if(b<18.5)
printf("You have low weight");
else if(b<25)
printf("You have normal weight");
else if(b<30)
printf("Obesity(1st-degree)");
else if(b<35)
printf("Obesity(2nd-degree)");
else if(b<40)
printf("Obesity(3rd-degree)");
else
printf("Obesity(4th-degree)");
	return 0; }