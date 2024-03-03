#include <stdio.h>
#include <stdlib.h>
int main() {
	int amt;
	float ti;
	scanf("%d",&amt);
	if(amt<=200000)
	{ti=0.00;
	    printf("%.2f",ti);}
	else if(amt<=500000)
	{ti=0.1*(amt-200000);
	printf("%.2f",ti);}
	else if(amt<=1000000)
	{ti=30000+((amt-500000)*0.2);
	printf("%.2f",ti);}
	else(amt>=1000000);
	{ti=130000+(0.3*(amt-1000000));
	printf("%.2f",ti);}
	return 0; }