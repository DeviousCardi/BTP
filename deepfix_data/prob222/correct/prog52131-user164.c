#include <stdio.h>
int main() {
	float mA,mB,mC;
	float eA,eB,eC;
	float netA,netB,netC;
	netA=mA*40/50+eA*60/100;
	netB=mB*40/50+eB*60/100;
	netC=mC*40/50+eC*60/100;
	if((netA-netB)*(netA-netC)<0)
	printf("%f",netA);
	else if((netB-netA)*(netB-netC)<0)
	printf("%f",netB);
	else
	printf("%f",netC);
	return 0; }