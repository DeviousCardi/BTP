#include <stdio.h>
int main()
{float mA,mB,mC;
scanf("%f%f%f",&mA,&mB,&mC);
float eA,eB,eC;
scanf("%f%f%f",&eA,&eB,&eC);
float fi_A=(mA*40/50.0)+(eA*60/100.0);
float fi_B=(mB*40/50.0)+(eB*60/100.0);
float fi_C=(mC*40/50.0)+(eC*60/100.0);
if((fi_A>=fi_B&&fi_A<=fi_C)||(fi_A<=fi_B&&fi_A>=fi_C))
    {printf("Median weighted score = %.2f",fi_A);}
else if((fi_B>=fi_C&&fi_B<=fi_A)||(fi_B<=fi_C&&fi_B>=fi_A))
    {printf("Median weighted score = %.2f",fi_B);}
else printf("Median weighted score = %.2f",fi_C);
	return 0; }