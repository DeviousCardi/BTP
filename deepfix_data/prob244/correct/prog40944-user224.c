#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti;
	float tax;
	scanf("%d",&ti);
	if(ti<=200000)
	tax=0.00;
	else
	if(ti>200000&&ti<=500000)
	tax=((ti-200000)*10)/100;
	else
	if(ti>500000&&ti<=1000000)
	tax=(((ti-500000)*20)/100)+30000;
	else
	if(ti>1000000)
	tax=(((ti-1000000)*30)/100)+130000;
    printf("%.2f",tax);
	return 0; }