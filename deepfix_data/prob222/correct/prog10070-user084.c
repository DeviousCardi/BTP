#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,total1,total2,total3,median;
scanf("%f",&a1);
scanf("%f",&b1);
scanf("%f",&c1);
scanf("%f",&a2);
scanf("%f",&b2);
scanf("%f",&c2);
total1=(40*a1)/50+(60*a2)/100;
total2=(40*b1)/50+(60*b2)/100;
total2=(40*c1)/50+(60*c2)/100;
if(total1<total2&&total2<total3||total3<total2&&total2<total1)
median=total2;
if(total2<total3&&total3<total1||total1<total3&&total3<total2)
median=total3;
if(total2<total1&&total1<total3||total3<total1&&total1<total2)
median=total1;
printf("Median weighted score = %.2f",median);
	return 0; }