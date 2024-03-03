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
	return 0; }