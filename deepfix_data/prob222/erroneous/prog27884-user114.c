#include <stdio.h>
int main()
{float mA,mB,mC;
scanf("%f%f%f",&mA,&mB,&mC);
float eA,eB,eC;
scanf("%f%f%f",&eA,&eB,&eC);
float fi-A=mA*40/50+eA*60/100;
float fi_B=mB*40/50+eA*60/100;
float fi_C=mC*40/50+eA*60/100;
if((fi_A>=fi_B&&fi_A<=fi_C)||(fi_A<=fi_B&&fi_A>=fi_C))
    {printf("%.2f",fi_A);}
else if((fi_B>=fi_C&&fi_B<=fi_A)||(fi_B<=fi_C&&fi_B>=fi_A))
    {printf("%.2f",fi_B);
else ((fi_C>=fi_A&&fi_C<=fi_B)||(fi_C<=fi_A&&fi_C>=fi_B))
    {printf("%.2f",fi_C);}
	return 0; }