#include <stdio.h>
#include <stdlib.h>
int main() {int inc;
float tax;
scanf("%d",&inc);
if(inc<=200000)
tax=0;
if(inc>200000&&inc<=500000)
tax=0.1*(inc-200000);
if(inc>500000&&inc<=1000000)
tax=30000+0.2*(inc-500000);
if(inc>1000000)
tax=130000 +0.3*(inc-1000000);
printf("%.2f",tax);
	return 0; }