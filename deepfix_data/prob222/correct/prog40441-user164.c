#include <stdio.h>
int main() {
	float mA,mB,mC;
	float eA,eB,eC;
	scanf("%f %f %f",&mA,&mB,&mC);
	scanf("%f %f %f",&eA,&eB,&eC);
	float netA,netB,netC;
	netA=mA*40.0/50.0+eA*60.0/100.0;
	netB=mB*40.0/50.0+eB*60.0/100.0;
	netC=mC*40.0/50.0+eC*60.0/100.0;
	if((netA-netB)*(netA-netC)<0.0)
	printf("Median weighted score = %.2f",netA);
	else if((netB-netA)*(netB-netC)<0.0)
	printf("Median weighted score = %.2f",netB);
	else
	printf("Median weighted score = %.2f",netC);
	return 0; }