#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,t1,t2,t3,median;
scanf("%f",&a1);
scanf("%f",&b1);
scanf("%f",&c1);
scanf("%f",&a2);
scanf("%f",&b2);
scanf("%f",&c2);
t1=(40*a1)/50+(60*a2)/100;
t2=(40*b1)/50+(60*b2)/100;
t3=(40*c1)/50+(60*c2)/100;
if((t1<t2)&&(t2<t3))||((t3<t2)&&(t2<t1))
median=t2;
if((t2<t3)&&(t3<t1)||(t1<t3)&&(t3<t2))
median=t3;
if((t2<t1)&&(t1<t3)||(t3<t1)&&(t1<t2)
median=t1;
printf("Median weighted score = %.2f",median);
	return 0; }