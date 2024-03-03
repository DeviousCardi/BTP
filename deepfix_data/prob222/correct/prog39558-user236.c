#include <stdio.h>
int main()
{float mA,mB,mC,eA,eB,eC ;
scanf("%f",&mA);
scanf("%f",&mB);
scanf("%f",&mC);
scanf("%f",&eA);
scanf("%f",&eB);
scanf("%f",&eC);
float fA=(40.0*mA/50)+(60*eA/100);
float fB=(40.0*mB/50)+(60*eB/100);
float fC=(40.0*mC/50)+(60*eC/100);
if ((fA<=fB&&fA>=fC)||(fA<=fC&&fA>=fB))
{printf("Median weighted score = %.2f",fA); }
else if ((fB<=fA&&fB>=fC)||(fB<=fC&&fB>=fA))
{printf("Median weighted score = %.2f",fB); }
else if ((fC<=fB&&fC>=fA)||(fC<=fA&&fC>=fB))
{printf("Median weighted score = %.2f",fC); }
return 0; }